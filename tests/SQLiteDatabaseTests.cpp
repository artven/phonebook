//
// Created by rafal on 09.03.16.
//

#include "SqliteDatabase.h"
#include "gtest/gtest.h"

TEST(QLiteDatabaseTests, noThrowOnNewDatabase) {
    ASSERT_NO_THROW(SQLiteDatabase{"testDatabase.db"});
}

TEST(QLiteDatabaseTests, canReopenDataBase) {
    SQLiteDatabase db{"testDatabase.db"};
    db.executeQuery("DROP TABLE IF EXISTS testowa");
    db.executeQuery("CREATE TABLE testowa("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                            "osoba VARCHAR(30), "
                            "wiek INT)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('Adam Giza', 25)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('Adam Gizello', 25)");
    auto r = db.executeQuery("SELECT * FROM testowa");
    ASSERT_EQ(r.size(), 2);
    db.close();

    SQLiteDatabase db2{"testDatabase.db"};
    r = db2.executeQuery("SELECT * FROM testowa");
    ASSERT_EQ(r.size(), 2);
}

TEST(QLiteDatabaseTests, createsValidExampleTable) {
    SQLiteDatabase db{"testDatabase.db"};
    db.executeQuery("DROP TABLE IF EXISTS testowa");
    db.executeQuery("CREATE TABLE testowa("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                            "osoba VARCHAR(30), "
                            "wiek INT)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('Adam Giza', 25)");

    auto r = db.executeQuery("SELECT * FROM testowa");

    ASSERT_EQ(r.size(), 1);
}


TEST(SQLiteTestTests, insertsMoreValues) {
    SQLiteDatabase db{"testDatabase.db"};
    db.executeQuery("DROP TABLE IF EXISTS testowa");
    db.executeQuery("CREATE TABLE testowa("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                            "osoba VARCHAR(30), "
                            "wiek INT)");

    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('Adam Giża', 22)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('Wojciech Gumuła', 23)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('Rafał Prusak', 24)");

    auto r = db.executeQuery("SELECT * FROM testowa");
    ASSERT_EQ(r.size(), 3);

    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('Jan Kowalski', 50)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('Marian Kowalski', 33)");

    r = db.executeQuery("SELECT * FROM testowa");
    ASSERT_EQ(r.size(), 5);
}

TEST(SQLiteDatabaseTests, selectsValues) {
    SQLiteDatabase db{"testDatabase.db"};
    db.executeQuery("DROP TABLE IF EXISTS testowa");
    db.executeQuery("CREATE TABLE testowa("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                            "osoba VARCHAR(30), "
                            "wiek INT)");

    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('A', 23)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('B', 24)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('C', 23)");

    auto r = db.executeQuery("SELECT * FROM testowa WHERE wiek = 23");
    ASSERT_EQ(r.size(), 2);
}

TEST(SQLiteDatabaseTests, deletesValues) {
    SQLiteDatabase db{"testDatabase.db"};
    db.executeQuery("DROP TABLE IF EXISTS testowa");
    db.executeQuery("CREATE TABLE testowa("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                            "osoba VARCHAR(30), "
                            "wiek INT)");

    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('A', 23)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('B', 24)");
    db.executeQuery("INSERT INTO testowa(osoba, wiek) VALUES('C', 23)");

    auto r = db.executeQuery("SELECT * FROM testowa");
    ASSERT_EQ(r.size(), 3);

    db.executeQuery("DELETE FROM testowa WHERE osoba = 'A'");
    r = db.executeQuery("SELECT * FROM testowa");
    ASSERT_EQ(r.size(), 2);
}

TEST(QLiteDatabaseTests, createsTableWithDatetime) {
    SQLiteDatabase db{"testDatabase.db"};
    db.executeQuery("DROP TABLE IF EXISTS testowa");
    db.executeQuery("CREATE TABLE testowa(id INTEGER PRIMARY KEY AUTOINCREMENT, date VARCHAR(25));");

    db.executeQuery("INSERT INTO testowa(date) VALUES(date('now'))");
    auto r = db.executeQuery("SELECT * FROM testowa");
    ASSERT_EQ(r.size(), 1);
    // date('now')||' '||time('now')

}
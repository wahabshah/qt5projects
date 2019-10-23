#include <QString>
#include <QtTest>
#include <QCoreApplication>

class Usecases_check_available_groceries : public QObject
{
    Q_OBJECT

public:
    Usecases_check_available_groceries();

private Q_SLOTS:
    void one_or_more_grocery_items_available();
};

Usecases_check_available_groceries::Usecases_check_available_groceries()
{
}

void Usecases_check_available_groceries::one_or_more_grocery_items_available()
{
    // Given there is a list of available grocery items
    QFAIL("not implemented");
    // And one or more grocery items are actually available
    QFAIL("not implemented");
   // When I check available groceries
    QFAIL("not implemented");
   // Then I am given the list of available grocery items
   QFAIL("not implemented");
   // And the grocery items are ordered by name, ascending
   QFAIL("not implemented");
}

QTEST_MAIN(Usecases_check_available_groceries)

#include "tst_check_available_groceries.moc"

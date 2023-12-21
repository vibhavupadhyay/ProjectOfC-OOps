#include <iostream>
#include <fstream>
using namespace std;

int Year()
{
    fstream a;
    a.open("Year.txt", ios::out);
    string a1;
    cin >> a1;
    a << a1;
    a.close();
    int year;
    a.open("Year.txt", ios::in);
    a >> year;
    a.close();
    return year;
}

int Month()
{
    fstream a;
    string a2;
    cin >> a2;
    a.open("Month.txt", ios::out);
    a << a2;
    a.close();
    int month;
    a.open("Month.txt", ios::in);
    a >> month;
    a.close();
    return month;
}

int Day()
{
    fstream a;
    string a3;
    cin >> a3;
    a.open("Day.txt", ios::out);
    a << a3;
    a.close();
    int day;
    a.open("Day.txt", ios::in);
    a >> day;
    a.close();
    return day;
}

int year()
{
    return Year();
}
int month1()
{
    return Month();
}
int day()
{
    return Day();
}
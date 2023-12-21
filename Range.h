#include <iostream>
#include <fstream>
using namespace std;

int Setrange()
{
    fstream a;
    a.open("Project.txt", ios::out);
    string b;
    cout << "Enter Your Desired Choice: ";
    cin >> b;
    a << b;
    a.close();

    a.open("Project.txt", ios::in);
    int a1;
    a >> a1;
    a.close();
    return a1;
}

int setrange()
{
    int x1 = Setrange();
    if (x1 > 8 || x1 < 1)
    {
        cout << "Wrong Inut: " << endl;
        setrange();
    }
    else
    {
        return x1;
    }
}
int Setrange1()
{
    fstream a;
    a.open("Project1.txt", ios::out);
    string b;
    cout << "Enter Your Desired Choice: ";
    cin >> b;
    a << b;
    a.close();

    a.open("Project1.txt", ios::in);
    int a1;
    a >> a1;
    a.close();
    return a1;
}
int setrange1()
{
    int x1 = Setrange1();
    if (x1 > 4 || x1 < 1)
    {
        cout << "Wrong Input: Re Enter: " << endl;
        setrange1();
    }
    else
    {
        return x1;
    }
}
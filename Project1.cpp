#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;
// Class For Login Logout Of An User.
class transport
{
protected:
    string name, username, password, mobile, u1, p1, a11 = "2", b11 = "0", c11 = "2", d11 = "0";
    int a2, balance = 20000;
    string pin = a11 + b11 + c11 + d11;

public:
    // Giving Defaults values.
    transport()
    {
        u1 = "user111";
        p1 = "user2005";
        name = "user";
        mobile = "xxxxx35113";
    }
    // Data For Existing User.
    void setdata1()
    {
        cin.ignore();
        cout << endl
             << "      ENTER YOUR USERNAME  : ";
        while (getline(cin, username))
        {
            if (username != u1)
            {
                system("color 4");
                cout << "      WRONG INPUT PLEASE RE ENTER USERNAME : ";
            }
            else
            {
                system("color 8");
                break;
            }
        }
        cout << "      ENTER YOUR PASSWORD : ";
        while (getline(cin, password))
        {
            if (password != p1)
            {
                system("color 4");
                cout << endl
                     << "      WRONG INPUT PLEASE RE ENTER PASSWORD : ";
            }
            else

            {
                system("color 8");
                system("cls");
                cout << endl
                     << "----YOUR ARE SUCCESFULLY LOGED IN----" << endl;
                break;
            }
        }
    }
    // Data Setup For New Users Or For Login.
    void setdata2()
    {
        cout << endl
             << "---WELCOME CUSTOMER ARE GOD FOR US----" << endl
             << endl
             << "     PLEASE REGISTER YOURSELF : " << endl;
        cin.ignore();
        cout << endl
             << "     ENTER YOUR FULL NAME : ";
        getline(cin, name);
        cout << "     ENTER MOBILE NUMBER : ";
        while (cin >> mobile)
        {
            if (mobile.length() != 10)
            {
                system("color 4");
                cout << "     PLEASE ENTER A VALID 10 DIGIT MOBILE NUMBER : ";
            }
            else
            {
                system("color 8");
                break;
            }
        }
        // Ignore to Tackle with string problem.
        cin.ignore();
        cout << "     ENTER USERNAME : ";
        getline(cin, username);
        cout << "     ENTER 8 DIGIT PASSWORD  : ";
        while (getline(cin, password))
        {

            if (password.length() < 8)
            {
                system("color 4");
                cout << "     TOO SHORT PLEASE RE ENTER : ";
            }
            else if (password.length() >= 8)
            {
                cout << "     Set Your Pin For The Payments: ";
                while (cin >> a11 >> b11 >> c11 >> d11)
                {
                    if (a11.length() > 1 || b11.length() > 1 || c11.length() > 1 || d11.length() > 1)
                    {
                        cout << "     Wrong Re Enter: " << endl;
                    }
                    else
                    {
                        pin = a11 + b11 + c11 + d11;
                        break;
                    }
                }
                system("color 8");
                system("cls");
                cout << endl
                     << "----YOUR ACCOUNT IS SUCCESSFULLY CREATED----" << endl;
                break;
            }
        }
        u1 = username, p1 = password;
    }
    // Code For Password Management.
    void changepassword()
    {
        cin.ignore();
        cout << endl
             << "        ENTER OLD PASSWORD : ";
        while (getline(cin, password))
        {
            if (password == p1)
            {
                system("color 8");
                cout << "        ENTER NEW PASSWORD   : ";
                while (getline(cin, p1))
                {

                    if (p1.length() < 8)
                    {
                        system("color 4");
                        cout << "    TOO SHORT PLEASE RE ENTER PASSWORD : ";
                    }
                    else if (p1.length() >= 8)
                    {
                        system("color 8");
                        cout << "----YOUR INFORMATION SAVED----" << endl;
                        break;
                    }
                }
                break;
            }
            else
            {
                system("color 4");
                cout << "    WRONG INPUT PLEASE RE ENTER YOUR OLD PASSWORD : ";
            }
        }
    }
    void verifypassword()
    {
        string zx6;
        cin.ignore();
        system("color 8");
        cout << endl
             << "    ENTER PASSWORD TO CONFIRM : ";
        while (getline(cin, password))
        {
            if (password != p1)
            {
                system("color 4");
                cout << "    WRONG INPUT PLEASE RE ENTER : ";
            }
            else
            {
                system("color 8");
                system("cls");
                cout << endl
                     << "---YOUR ACTION IS COMPLETED YOU MAY PROCEED TO NEXT PART---" << endl;
                cout << endl
                     << "        PRESS ANY KEY TO CONTINUE : ";
                cin >> zx6;
                break;
            }
        }
    }
};
// Class For Deal With Dates And Time.
class dates
{
protected:
    int m, d, y1;
    string month[13] = {" ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

public:
    // Code For Date Setup.
    void setdates()
    {
        system("color 8");
        cout << "Enter Year/Month/date: " << endl;
        cin >> y1;
        system("cls");
        cout << y1 << "/";
        cin >> m;
        system("cls");
        cout << y1 << "/" << m << "/";
        cin >> d;
        system("cls");
        cout << y1 << "/" << m << "/" << d << endl;
        if (y1 > 2025 || y1 < 2023)
        {
            common();
        }
        if (m > 12 || m < 1)
        {
            common();
        }
        if (y1 % 4 == 0 && m == 2)
        {
            if (d < 1 || d > 29)
            {
                common();
            }
        }
        if (y1 % 4 != 0 && m == 2)
        {
            if (d > 28 || d < 1)
            {
                common();
            }
        }
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            if (d > 31 || d < 1)
            {
                common();
            }
        }
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d > 30 || d < 1)
            {
                common();
            }
        }
        if (y1 == 2023 && m < 6 || m > 12)
        {
            common();
        }
    }
    void common()
    {
        system("color 4");
        cout << "Not Available For The Date Choosed. : Enter Another Date :" << endl;
        Sleep(2000);
        setdates();
    }
};
// Class For Rutes Of Our Tourism System.
class destinations
{
protected:
    // Pre Defined Routes.
    string route[9] = {" ", "DELHI-SASARAM.", "SASARAM-DELHI.", "SHIMLA-DELHI.", "DELHI-SHIMLA.", "VAISHNODHAM-DELHI.", "DELHI-VAISHNODHAM.", "DELHI-AGRA.", "AGRA-DELHI."};
    int price, n1, x1 = 0;
    int r1[9] = {0, 1800, 1800, 1200, 1200, 2400, 2400, 1400, 1400};

public:
    // Setting Destinations.
    void setdestinations()
    {
        fstream r("route.txt");
        string f;
        while (!r.eof())
        {
            getline(r, f);
            cout << f << endl;
        }
    }
    void choosedestinatins()
    {
        cout << endl
             << "      PLZ SELECT YOUR ROUTE  :";
        cin >> x1;
        if (x1 > 8 || x1 < 1)
        {
            system("color 4");
            cout << "      Wrong Input Please Re Enter :" << endl;
            choosedestinatins();
        }
        else
        {
            system("color 8");
            cout << endl
                 << endl
                 << "     YOU HAVE CHOOSED : " << route[x1] << endl;
        }
    }
    // Calculating Prices For User Tour.
    void calculatingticketprice()
    {
        cout << "    ---ENTER NO. OF PASSENGER---" << endl
             << "    BOOKING OF MAX 4 PERSON CAN BE APPLIED AT A TIME: ";
        cin >> n1;
        if (n1 < 1 || n1 > 4)
        {
            system("color 4");
            cout << "        Wrong Input Please Re-enter: " << endl;
            calculatingticketprice();
        }
        else
        {
            system("color 8");
            price = r1[x1] * n1;
        }
    }
};
// Final Class For Our Tourism Managemnt System.
// Making The Things Using Multiple Inheritance.
class ticket : public transport, public dates, public destinations
{
    int zx2;
    string zx4;

public:
    // Code For Printing Current Date And Time In our Ticket.
    time_t x = time(0);
    char *z = ctime(&x);
    string zx5;
    // Code For Printing User Ticket.
    void printticket()
    {
        system("color 3");
        cout << endl
             << "--THIS IS COMPUTER GENERATED TICKET--" << endl
             << "\n"
             << "***************************************************************************************************************\n "
             << "                ---e-TICKET GENERATED BY VIBHAV AND JATIN TOURISM MANAGEMENT SYSTEM---\n"
             << "        ============================================================================================       "
             << "\n"
             << "\n"
             << "        NO. OF PASSENGER : " << n1;
        cout << "\n"
             << "        ROUTE : " << route[x1];
        cout << "\n"
             << "        FAIR : " << price;
        cout << "\n"
             << "        NAME OF ACCONT HOLDER : " << name;
        cout << "\n"
             << "        MOBILE NUMBER : " << mobile;
        cout << "\n"
             << "        BOOKING DATE : " << z;
        cout << "\n"
             << "        TRAVEL DATE : " << d << "/" << month[m] << "/" << y1 << ".";
        cout << "\n\n"
             << "        ========================== HOPE YOU WILL ENJOY YOUR JOURNEY ================================"
             << "\n"
             << "***************************************************************************************************************\n ";
        cout << "      PRESS ANY KEY TO CONTINUE : ";
        cin >> zx5;
    }
    // Code To Deal With The Payments Made By The Users.
    void payments1()
    {
        string show;
        if (balance >= 20000)
        {
            show = "Credited";
        }
        else
        {
            show = "Debited";
        }
        cout << endl
             << "======================================================================================" << endl
             << endl
             << "A/c XX9932 " << show << " INR " << price << " Dt " << z << " thru UPI : xxxxxx.Bal INR " << balance << " Not u ? Fwd this SMS to 926xxxx to block UPI." << endl
             << endl
             << "=====================================================================================" << endl;
        Sleep(3000);
    }
    void payments()
    {
        system("color 8");
        string x1, x2;
        cout << "Enter Your 4-Digit Pin To Confirm Payment: " << endl;
        cin >> a11;
        system("cls");
        cout << "*";
        cin >> b11;
        system("cls");
        cout << "* *";
        cin >> c11;
        system("cls");
        cout << "* * *";
        cin >> d11;
        system("cls");
        cout << "* * * *";
        if (a11 + b11 + c11 + d11 != pin)
        {
            system("color 4");
            Sleep(3000);
            cout << endl
                 << "Wrong Pin Re ";
            payments();
        }
        else
        {
            balance -= price;
            cout << endl
                 << "Your Booking Is Confirmed: " << endl;
            system("color 1");
            payments1();
            cout << endl
                 << "Press Any Key To Continue: " << endl;
            cin >> x2;
        }
    }
    // Setting All The Things For The Ticket Bookings.
    void confirmticket()
    {
        setdestinations();
        choosedestinatins();
        calculatingticketprice();
        system("cls");
        setdates();
        system("cls");
        string zx1;
        cout << endl
             << "===================================================================" << endl
             << endl
             << "--THE ROUTE OF TICKET is---" << route[x1] << endl
             << "PRICE=" << price << endl
             << "--AND THE DATE OF TRAVEL--" << endl
             << "DATE="
             << d << " " << month[m] << " " << y1 << endl
             << "===================================================================" << endl
             << endl
             << "-DO YOU WANT TO CONFIRM TICKET-" << endl
             << "1.YES CONFIRM." << endl
             << "2.NO BACK AGAIN TO BOOKING ." << endl
             << ": ANY OTHER KEY FOR RETURN TO MAIN MENU ." << endl
             << endl
             << "                 PLEASE SELECT YOUR CHOICE:";
        while (cin >> zx1)
        {
            if (zx1 == "1")
            {
                system("cls");
                payments();
                break;
            }
            else if (zx1 == "2")
            {
                system("cls");
                confirmticket();
                break;
            }
            system("cls");
            x1 = 0;
            break;
        }
    }
    void check()
    {
        cout << endl
             << endl
             << "   CHECKING PLEASE WAIT....";
        Sleep(3000);
        system("color 4");
        system("cls");
        cout << endl
             << "---YOU DONT HAVE ANY TICKET PLZ BOOK A TICKET TO PRINT/CANCEL IT--" << endl
             << endl
             << "     PRESS ANY KEY TO CONTINUE : ";
        cin >> zx4;
    }
    void cancelticket()
    {
        cout << endl
             << "---WOULD YOU LIKE TO CANCEL/PRINT YOUR TICKET---" << endl
             << "1. YES PRINT MY TICKET." << endl
             << "PRESS ANY OTHER KEY FOR CANCEL TICKET." << endl
             << "=======================================================" << endl
             << endl
             << "              YOUR CHOICE:";
        while (cin >> zx2)
        {
            if (zx2 != 1)
            {
                if (x1 != 0)
                {
                    verifypassword();
                    cout << endl
                         << endl
                         << "   CANCELING TICKET PLEASE WAIT....";

                    Sleep(3000);
                    cout << endl
                         << endl
                         << "===================================" << endl
                         << "--YOUR TICKET GET CANCELED---" << endl
                         << "---REFUND WILL BE INITIATED SOON---" << endl
                         << "===================================================" << endl;
                    Sleep(3000);
                    balance += price;
                    system("cls");
                    system("color 2");
                    payments1();
                    cout << endl
                         << endl
                         << "Press Any Key To Continue: ";
                    cin >> zx4;
                    system("cls");
                    x1 = 0;
                    break;
                }
                else
                {
                    check();
                    break;
                }
            }
            else if (zx2 == 1)
            {
                if (x1 != 0)
                {
                    cout << endl
                         << endl
                         << "   LOADING PLEASE WAIT....";
                    Sleep(3000);
                    system("cls");
                    printticket();
                    break;
                }
                else
                {
                    check();
                    break;
                }
            }
            break;
        }
    }
};
void file()
{
    fstream a;
    string b;
    a.open("loginlogout.txt", ios::in);
    while (!a.eof())
    {
        getline(a, b);
        cout << b << endl;
    }
    a.close();
}
void option()
{
    cout << endl
         << "---PROCEED TO BOOKING OR NOT---" << endl
         << "1. BOOKING." << endl
         << "ANY OTHER KEY FOR EXIT " << endl
         << "===============================================" << endl
         << endl
         << "                SELECT OPTION:";
}
// Declaring Main And Main Function And Making A Proper Order To Execute Each Code With Their Order.
int main()
{
    ticket t1;
    string z1, x2, y1, a1;
    system("color 8");
    system("cls");
    fstream w("vibhav.txt");
    string w1;
    while (!w.eof())
    {
        getline(w, w1);
        cout << w1 << endl;
    }
    string zx3;
    cout << endl
         << "             PRESS ANY KEY : ";
    cin >> zx3;
    cout << endl
         << endl
         << "   LOADING....";
    Sleep(3000);
    while (system("cls"), system("color 8"), file(), cout << endl
                                                          << "                 PRESS KEY AS PER YOUR CHOICE: ")
    {
        while (cin >> z1)
        {
            if (z1 == "1")
            {
                system("cls");
                system("color 8");
                t1.setdata1();
                option();
                while (cin >> y1)
                {
                    if (y1 == "1")
                    {
                        system("cls");
                        t1.confirmticket();
                    }
                    else
                    {
                        system("cls");
                        break;
                    }
                    break;
                }
                break;
            }
            else if (z1 == "2")
            {
                system("cls");
                system("color 8");
                t1.setdata2();
                option();
                while (cin >> y1)
                {
                    if (y1 == "1")
                    {
                        system("cls");
                        t1.confirmticket();
                    }
                    else
                    {
                        system("cls");
                        break;
                    }
                    break;
                }
                break;
            }
            else if (z1 == "3")
            {
                system("cls");
                system("color 8");
                t1.confirmticket();
                break;
            }
            else if (z1 == "4")
            {
                system("cls");
                system("color 8");
                t1.changepassword();
                string a1;
                option();
                cin >> a1;
                if (a1 == "1")
                {
                    system("cls");
                    cout << endl
                         << endl
                         << "   REDIRECTING TO TICKET PAGE....";
                    Sleep(4000);
                    system("cls");
                    t1.confirmticket();
                }
                system("cls");
                break;
            }
            else if (z1 == "5")
            {
                system("cls");
                system("color 8");
                t1.cancelticket();
                break;
            }
            else
            {
                break;
            }
        }

        if (z1 > "5" || z1 < "1")
        {
            system("color 8");
            cout << endl
                 << endl
                 << "   EXITING PLEASE WAIT....";
            Sleep(4000);
            system("cls");
            cout << endl
                 << "---EXITED SUCCESSFULLY HOPE YOU COME AGAIN---";
            break;
        }
    }
    return 0;
}
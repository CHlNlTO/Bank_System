#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std; 


void login();
void regist();
void depo();
void with();
void baliq();

string inputs()
{
    
}



int main()
{
    int choice;

    system("cls");
    cout << " ---------------- Menu -----------" << endl;
    cout << "1. Login " << endl;
    cout << "2. Register  " << endl;
    cout << "3. Deposit  " << endl;
    cout << "4. Withdraw  " << endl;
    cout << "5. Balance Inquiry  " << endl;
    cout << "6. Exit  " << endl;
    cout << ": ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        login();
        break;
    
    case 2:
        regist();
        break;
    
    default:
        break;
    }
}

void login()
{
    system("cls");
    string accname,password,ac,pw;

    cin.ignore();
    cout << "Enter Account Name: ";
    getline(cin,accname);
    cout << "Enter PIN: ";
    getline(cin,password);

    for (int  i = 0; i < accname.length(); i++)
    {
        if (accname[i] >= 'A' && accname[i] <= 'Z')
        {
            accname[i] = accname[i] + 32;
        }
    
    }

    ifstream read("DATA\\" + accname + ".txt");

    getline(read,ac);
    getline(read,pw);
    //printing ac and pw 
    //cout << ac << endl;
    //cout << pw << endl;1

    if  ((accname == "\0" || password =="\0") || (ac != accname && pw != password))
    {
        cout << "ERROR: CHECK MO KUNG NALAGAYAN MO NG SPACE" << endl;
        cout << "ERROR: WRONG PASSOWORD AND USERNAME" << endl;

        system("pause");
        login();

    }

    else 
    {
        cout << "SSSS" << endl;
        cout << "WELCOME TO BANK OF BENNYSHARK";
    }

}

void regist()
{
    string accname,password;

    cin.ignore(); 
    cout << "Enter Accountname: ";
    getline(cin,accname);


    // GIVE ACCNUMBER RNG

    cout << "Enter 4 - 6 PIN: ";
    getline(cin,password);

    for (int  i = 0; i < accname.length(); i++)
    {
        if (accname[i] >= 'A' && accname[i] <= 'Z')
        {
            accname[i] = accname[i] + 32;
        }
    
    }
 
    ofstream file;
    file.open("DATA\\" + accname + ".txt",ios::app | ios::ate);
    
    file << accname << endl << password;

    file.close();



}


/*
        for( int a = 0; a < 20; a++ )
        {
            system("break");
            cout << '\xDF';
            system("break");
        }*/
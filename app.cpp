#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int,int);
void menu();
void emenu();
int loginscr();
int admin();
int user();
int choice1();
int choice2();
int choice3();
int choice4();
int choice5();
int choice6();
int selectedopt();
int uchoice1();
int uchoice2();
int uchoice3();
int uselectedopt();
int login;
int choice=0;
int uchoice=0;
int x1=20,y1=11;
string title, add, method;
int opt;
int main()
{
    system("cls");
    system("color B5");
    menu();
    gotoxy(20,11);
    {
        cout << "PRESS ANYWHERE TO CONTINUE."<< endl;
    }
    Sleep(200);
    getch();
    loginscr();
}
void menu()
{
gotoxy(1,0);
cout << "  _________________________________________________________________________________________________________________________________________ " << endl;
gotoxy(1,1);
cout << " | ....................................................................................................................................... | " << endl;
gotoxy(1,2);
cout << " | :                                                                                                                                     : | " << endl;
gotoxy(1,3);
cout << " | :  $$$$$    $$$$$   $$$$      $$$$$   $$$$$$          $$$$$  $$$$$$  $$$$$$$   $$$$$   $$$$$$$$  $$$$$$    $$$$  $$$$  $$$$      $$$$ : | " << endl;
gotoxy(1,4);
cout << " | : $$   $$  $$   $$   $$      $$   $$   $$  $$        $$   $$  $$  $$  $$  $$  $$   $$  $$ $$ $$   $$  $$    $$    $$    $$ $$  $$ $$  : | " << endl;
gotoxy(1,5);
cout << " | : $$       $$   $$   $$      $$   $$   $$  $$        $$       $$  $$  $$      $$          $$      $$  $$    $$    $$    $$  $$$$  $$  : | " << endl;
gotoxy(1,6);
cout << " | : $$       $$   $$   $$      $$   $$   $$$$$           $$$$   $$$$$   $$$$    $$          $$      $$$$$     $$    $$    $$   $$   $$  : | " << endl;
gotoxy(1,7);
cout << " | : $$       $$   $$   $$      $$   $$   $$ $$              $$  $$      $$      $$          $$      $$  $$    $$    $$    $$        $$  : | " << endl;
gotoxy(1,8);
cout << " | : $$   $$  $$   $$   $$  $$  $$   $$   $$  $$        $$   $$  $$      $$  $$  $$   $$     $$      $$   $$   $$    $$    $$        $$  : | " << endl;
gotoxy(1,9);
cout << " | :  $$$$$    $$$$$   $$$$$$$   $$$$$   $$$   $$$       $$$$$  $$$$    $$$$$$$   $$$$$      $$     $$$    $$$  $$$$$$    $$$$      $$$$ : | " << endl;
gotoxy(1,10);
cout << " | :                                                                                                                                     : | " << endl;
gotoxy(1,11);
cout << " | :                                                                                                                                     : | " << endl;
gotoxy(1,12);
cout << " | :                                                                                                                                     : | " << endl;
gotoxy(1,13);
cout << " | :                                                                                                                                     : | " << endl;               
gotoxy(1,14);
cout << " | :                                                                                                                                     : | " << endl;               
gotoxy(1,15);
cout << " | :.....................................................................................................................................: | " << endl;
gotoxy(1,16);
cout << " |_________________________________________________________________________________________________________________________________________| " << endl;
}
void emenu()
{
    gotoxy(1,0);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,1);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,2);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,3);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,4);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,5);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,6);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,7);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,8);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,9);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,10);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,11);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,12);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,13);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,14);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,15);
    cout<<"                                                                                                                                            "<< endl;
    gotoxy(1,16);
    cout<<"                                                                                                                                            "<< endl;

}
int loginscr()
{
    system("cls");
    gotoxy(x1,y1);
    cout << "Your Identity: \n 1-Admin \n 2-User :"<< endl;
    cin >> login ;
    if (login==1)
    {
        admin();
    }
    else if (login==2)
    {
        user();
    }
    return login;
}
int admin()
{
    uselectedopt();
}
int user()
{
    selectedopt();
}
int selectedopt()
{ 
    system ("cls");
    gotoxy(x1,y1);
    cout << "CHO0SE ANY OF THE FOLLOWING OPTIONS: \n 1-APPLY FOR MEMBERSHIP CARD \n 2-VIEW AVAILABLE ART STOCK \n 3-ORDER PAINTING \n 4-BUY ART SUPPLIES  \n 5-RATE OUR SERVICE \n 6-EXIT"<< endl;
    cout << "Selected option:";
    cin>> choice;
    while(choice!=6)
    {
    if (choice==1)
    {
        choice1();
    }
    else if (choice==2)
    {
        choice2();
    }
    else if (choice==3)
    {
        choice3();
    }
    else if (choice==4)
    {
        choice4();
    }
    else if (choice==5)
    {
        choice5();
    }
    else 
    {
        choice6();
    }
    }
    return choice;
}
int choice1()
{
    system("cls");
    int apply;
    cout << "APPLY FOR MEMBERSHIP CARD" << endl;
    cout << "Press 1 to apply \n Press 0 to go back to main menu" << endl;
    cin >> apply;
    if (apply==1)
    {
        cout << "Thank you for applying for our membership card. You will receive it soon :)" << endl;
    }
    else 
    {
        system("cls");
        selectedopt(); 
    }
    return apply;
}
int choice2()
{
    emenu();
    system ("cls");
    int op;
    cout << "VIEW AVAILABLE ART STOCK:"<<endl;
    cout << "1-Canvas" << endl;
    cout << "2-Brushes" << endl;
    cout << "3-Base coat" << endl;
    cout << "4-Acrylic Paints" << endl;
    cout << "5-Oil Paints" << endl;
    cout << "6-Primer" << endl;
    cout << "7-Easel" << endl;
    cout << " " << endl;
    cout << "1-Go to main menu \n 2-Exit application" << endl;
        cin >> op;
        if (op==1)
        {
            system("cls");
            selectedopt();
        }
        else
        {
            system("cls");
            return 0;
        }
    return op;
}
int choice3()
{
    emenu();
    system ("cls");
    cout << "BUY ART-WORK."<<endl;
    cout << "Enter painting title:";
    cin >> title;
    cout << "Enter adress:";
    cin >> add;
    cout << "Enter payment method :";
    cin >> method;
    cout << "Confirm order: 1-Yes/2-No : ";
    cin >> opt;
    if (opt==1)
    {
        cout<<"Your order has been placed succesfully!" << endl;
    }
    else 
    {
        int option;
        cout << "Oops, you canceled your order." << endl;
        cout << "1-Go to main menu \n 2-Exit application" << endl;
        cin >> option;
        if (option==1)
        {
            system("cls");
            selectedopt();
        }
        else
        {
            system("cls");
            return 0;
        }
        return option;
    }
    return opt;
}
int choice4()
{
    emenu();
    system("cls");
    string quant;
    cout << "BUY ART SUPPLIES" << endl;
    cout << "Enter Product number:";
    cin >> title;
    cout << "Enter quantity: ";
    cin >> quant;
    cout << "Enter adress:";
    cin >> add;
    cout << "Enter payment method :";
    cin >> method;
    cout << "Confirm order: 1-Yes/2-No : ";
    cin >> opt;
    if (opt==1)
    {
        cout<<"Your order has been placed succesfully!" << endl;
    }
    else if (opt==2)
    {
        int option;
        cout << "Oops, you canceled your order." << endl;
        cout << "1-Go to main menu \n 2-Exit application" << endl;
        cin >> option;
        if (option==1)
        {
            system("cls");
            selectedopt();
        }
        else
        {
            system("cls");
            return 0;
        }
        return option;
    }
    return opt;
}
int choice5()
{
    system("cls");
    int star;
    cout << "RATE OUR SERVICE" << endl;
    cout << "Press 0 to go to menu or to exit application."<< endl;
    cout << "On a scale of 1-5, how much satisfaied are you with our service(Enter 1-5 stars *): ";
    cin >> star;
    if (star>=1 && star <=5)
    {
        cout << "Thank you for your opinion, we will try to further improve our service."<<endl;
        return 0;
    }
    else if(star==0)
    { 
        int back;
        cout << "1-Go to main menu \n 2-Exit application";
        cin >> back;
    if (back==1)
    {
        system("cls");
        selectedopt();
    }
    else if (back==2)
    {
        system("cls");
        return 0;
    }
    return back;
}
}
int choice6()
{
    emenu();
    system ("cls");
    int opt;
    cout << "EXIT APPLICATION" << endl;
    cout << "1-Yes/2-No ";
    cin >> opt;
   
    if (opt==1)
    {
        system("cls");
        return 0;
    }
    else if (opt==2)
    {
        system("cls");
        selectedopt();
    }
    return opt;
}
int uselectedopt()
{
    system ("cls");
    gotoxy(x1,y1);
    cout << "CHO0SE ANY OF THE FOLLOWING OPTIONS: \n 1-ADD/REMOVE STOCK \n 2-VIEW ADDED ART STOCK \n 3-EXIT"<< endl;
    cout << "Selected option:";
    cin >> uchoice;
    while(uchoice!=3)
    {
    if (uchoice==1)
    {
        uchoice1();
    }
    else if (uchoice==2)
    {
        uchoice2();
    }
    else 
    {
        uchoice3();
    }
    return uchoice;
    }
}
int uchoice1()
{
    system("cls");
    gotoxy(x1,y1);
    int nofitems;
    cout << "ADD/REMOVE STOCK" << endl;
    cout << "Enter number of items you want to add/remove: ";
    cin >> nofitems;
    for (int i=1;i<=nofitems;i++)
    {
        int item;
        cout << i << "-";
        cin >> item;
    }
    cout << " " << endl;
    cout << "1-Go to main menu \n 2-Exit application" << endl;
    int op;
    cin >> op;
    if (op==1)
    {
        system("cls");
        uselectedopt();
    }
    else
    {
        system("cls");
        uchoice3();
    }
    return op;
}
int uchoice2()
{
    system("cls");
    cout << "VIEW ADDED ART STOCK";
    cout << "1-Canvas" << endl;
    cout << "2-Brushes" << endl;
    cout << "3-Base coat" << endl;
    cout << "4-Acrylic Paints" << endl;
    cout << "5-Oil Paints" << endl;
    cout << "6-Primer" << endl;
    cout << "7-Easel" << endl;
    cout << " " << endl;
    cout << "1-Go to main menu \n 2-Exit application" << endl;
    int op;
    cin >> op;
    if (op==1)
    {
        system("cls");
        uselectedopt();
    }
    else
    {
        system("cls");
        uchoice3();
    }
    return op;
}
int uchoice3()
{
    emenu();
    system ("cls");
    int opt;
    cout << "EXIT APPLICATION" << endl;
    cout << "1-Yes/2-No ";
    cin >> opt;
   
    if (opt==1)
    {
        system("cls");
        return 0;
    }
    else if (opt==2)
    {
        system("cls");
        loginscr();
    }
    return opt;
}
void gotoxy(int x,int y)
{ 
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
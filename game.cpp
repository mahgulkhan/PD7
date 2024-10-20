#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void maze();
void gotoxy (int x, int y);
void penguin();
void epenguin();
void penemy1();
void eenemy1();
void movenemy1();
void penemy2();
void eenemy2();
void movenemy2();
void penemy3();
void eenemy3();
void movenemy3();
void movepenright();
void movepenleft();
void movepenup();
void movependown();
void shoot1();
void shoot2();
void shoot3();
char getCharAtxy(short int x,short int y);
int pX = 2, pY = 18;
int ex1 = 50, ey1 = 6;
int ex2 = 77, ey2 = 2;
int ex3 = 6, ey3 =5 ;
int ebx1 = -1, eby1 = -1;
int ebx2 = -1, eby2 = -1;
int ebx3 = -1, eby3 = -1;
int Health=100;

int main()
{
    system("cls");
    system("color 06");
    maze();
    penemy1();
    penemy2();
    penemy3();

    while (true)
    {
        movenemy1();
        shoot1();
        Sleep(200);
        
        movenemy2();
        shoot2();
        Sleep(200);

        movenemy3();
        shoot3();
        Sleep(200);
    
        penguin();

        if (GetAsyncKeyState(VK_LEFT))
        {
            movepenleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
             movepenright();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movepenup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movependown();
        }
        gotoxy(3,1);
        cout << "Health:" << Health;
        if (Health <= 0)
        {
            system("cls");
            gotoxy(35, 12);
            cout << "GAME OVER!";
            break;
        }
        Sleep(200);   
    }
}
void maze()
{
    cout << " ********************************************************************************** " << endl;
    cout << " *                                               \\/                               * " << endl;
    cout << " *    \\/                                                                          * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                           \\/                                                   * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " *                                                                                * " << endl;
    cout << " ********************************************************************************** " << endl;
    
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void penguin()
{
    gotoxy(pX,pY);
    cout << " C<"<<endl;
    gotoxy(pX,pY+1);
    cout << "/O\\" << endl;
}
void epenguin()
{
    gotoxy(pX,pY);
    cout << "   ";
    gotoxy(pX, pY+1);
    cout << "   ";
}
void penemy1()
{
    gotoxy(ex1,ey1);
    cout << ">^.^<" <<endl;
}
void eenemy1()
{
    gotoxy(ex1,ey1);
    cout << "     " <<endl;
}
void movenemy1()
{
    eenemy1();
    ex1=ex1+1;
    if(ex1 == 70)
    {
        ex1 = 50;
    }
    penemy1();
}
void shoot1()
{
    if (eby1 == -1)  
    {
        ebx1 = ex1;
        eby1 = ey1 + 1;
    }
    else
    {
        gotoxy(ebx1, eby1);
        cout << " ";  
        eby1++;  

        if (eby1 < 20)
        {
            gotoxy(ebx1, eby1);
            cout << "|";  
            if (ebx1 >= pX && ebx1 <= pX + 2 && eby1 >= pY && eby1 <= pY + 1)
            {
                Health -= 10; 
                eby1 = -1; 
            }
        }
        else
        {
            eby1 = -1;  
        }
    }
}
void penemy2()
{
    gotoxy(ex2,ey2);
    cout << "^0^";
}
void eenemy2()
{
    gotoxy(ex2,ey2);
    cout << "   ";
}
void movenemy2()
{
    eenemy2();
    ey2=ey2+1;
    if(ey2 == 10)
    {
        ey2 = 2;
    }
    penemy2(); 
}
void shoot2()
{
    if (eby2 == -1) 
    {
        ebx2 = ex2;
        eby2 = ey2 + 2;
    }
    else
    {
        gotoxy(ebx2, eby2);
        cout << " ";  
        eby2++;  

        if (eby2 < 20)
        {
            gotoxy(ebx2, eby2);
            cout << "|";  
            if (ebx2 >= pX && ebx2 <= pX + 2 && eby2 >= pY && eby2 <= pY + 1)
            {
                Health -= 10; 
                eby2 = -1; 
            }
        }
        else
        {
            eby2 = -1;  
        }   
    }
}
void penemy3()
{
    gotoxy(ex3,ey3);
    cout << "UwU" << endl;
}
void eenemy3()
{
    gotoxy(ex3,ey3);
    cout << "   " << endl;
}
void movenemy3()
{
    eenemy3();
    ex3=ex3+1;
    ey3=ey3+1;
    if (ex3==20)
    {
        ex3=6;
    }
    if (ey3==11)
    {
        ey3=5;
    }
    penemy3();
}
void shoot3()
{
    if (eby3 == -1)  
    {
        ebx3 = ex3;
        eby3 = ey3 + 1;
    }
    else
    {
        gotoxy(ebx3, eby3);
        cout << " ";
        eby3++;  

        if (eby3 < 20) 
        {
            gotoxy(ebx3, eby3);
            cout << "|"; 
            if (ebx3 >= pX && ebx3 <= pX + 2 && eby3 >= pY && eby3 <= pY + 1)
            {
                Health -= 10; 
                eby3 = -1; 
            } 
        }
        else
        {
            eby3 = -1;  
        }
    }
}
void movepenleft()
{
    if (getCharAtxy(pX-1, pY) == ' ' )
    {
        epenguin();
        pX = max(1,pX - 1);
        penguin();
    }
}
void movepenright()
{
    if (getCharAtxy(pX+3, pY) == ' ')
    {
        epenguin();
        pX = min(77,pX + 1);
        penguin();
    }
}
void movepenup()
{
    if (getCharAtxy(pX+1, pY-1) == ' ' && getCharAtxy(pX-1, pY-1))
    {
        epenguin();
        pY = max(1,pY - 1);
        penguin();
    }
}
void movependown()
{
    if (getCharAtxy(pX+3, pY+1) == ' ')
    {
        epenguin();
        pY = min(18,pY + 1); 
        penguin();
    }
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
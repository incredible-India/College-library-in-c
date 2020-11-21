#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>
#include"admin.h"
#include"fileid.h"
#include"student.h"
#include"bookinfo.h"

void SetColor(int ForgC);
void gotoxy(int a,int b)
{
       COORD x;
       x.X=a;


       x.Y=b;


       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);

}
void SetColor(int ForgC)
{
     WORD wColor;


     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}


int main()
{
    SetConsoleTitle("WELCOME IN LIBRARY");
void (*o)(void);

 void (*l)(void);
 l=option;

 o=admin;
    o();
  l();


}

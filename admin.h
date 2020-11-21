
#define ENTER 13
#define TAB 9
#define BKSP 8
#define ESC 27
void idread(void);
void idwrite(int );
void password1(void);
void idwrite2(char[]);
void gotoxy(int,int);
void feedback(char fee[]);
void stdetail(void);
void studentportal(void);
void bookinfo(char []);
void studentidentifications (char usn[]);
void SetColor(int);

void admin(void)
{
int id;
id1: id3:

gotoxy(40,12);
system("color 07");
printf("ADMIN LOGIN......");
gotoxy(75,25);
printf("FORGET ID TYPE <2>");
gotoxy(40,14);
printf("SEA@admin");
scanf("%d",&id);
idwrite(id);
if(id==95068)
{
    system("cls");
    password1();
}
else if(id==2)
{
    system("cls");
    idread();
    getch();
    system("cls");
    goto id3;
}
else
{ id2:
    system("cls");
    system("color 0c");
  Beep(1500,100);
  gotoxy(40,16);
    printf(" OOPPPPPSSSS Incorrect password");
    {
        char ch;

        gotoxy(40,18);
        printf(" PRESS <ENTER> TO TRY AGAIN");
        gotoxy(40,20);
        printf(" PRESS <ESC> TO EXIT");
        ch=getch();
        if(ch==ENTER)
        {
            system("cls");
            goto id1;
        }else if(ch==ESC)
        {
            system("cls");
            system("color 0a");
            gotoxy(40,12);
            printf("MEET YOU AGAIN DEAR");
            getch();
        }else
        {

            goto id2;
        }
    }

}






}
void password1(void)
{

    int x4=0;
    char v,pwd[100];
    gotoxy(40,12);
    printf("\nENTER THE PASSWORD ....\n");
    printf("\nPassword....\t");
    while(1)
    {

       v= getch();

        if(v==ENTER|| v==TAB)
        {
         pwd[x4]='\0';
         break;

        }else if(v==BKSP)
        {
            if(x4>0)
            {
                x4--;
                printf("\b  \b");
            }
        }else{
        pwd[x4++]=v;

        printf("* \b");
        }


    }
idwrite2(pwd);
}
void option(void)
{
    char ch;
    SetConsoleTitle("WELCOME IN LIBRARY");
    system("cls");
   system("color 03");
   gotoxy(40,8);
   SetColor(78);
   printf("1: PRINT THE LIST OF STUDENT ");
   gotoxy(40,10);
   SetColor(35);
   printf("2: STUDENT LOGIN..");
   gotoxy(40,12);
   SetColor(26);
   printf("3: GIVE FEEDBACK");
   gotoxy(40,14);
   SetColor(44);
   printf("4: EXIT");
   gotoxy(40,16);
   printf("==>>\t");
   fflush(stdin);
   ch=getche();
   if(ch=='1')
    {  system("cls");
    system("color 05");
        stdetail();
        getche();
        system("cls");
        option();

    }
   else if(ch=='2')
   {
       char gh[5];
     system("cls");
     system("color 70");
     gotoxy(40,12);
     printf("STUDENT U.S.N NO....");
     gotoxy(40,14);
     printf("1SP19");
     gets(gh);
     bookinfo(gh);
     studentidentifications(gh);


   } else if(ch=='3')
   {
       char feed[500],vh;
       system("cls");
       system("color 0a");
       printf("WRITE YOUR FEEDBACK HERE.....\n");
       gets(feed);
       feedback(feed);
       ret:
       printf("\n \nTHANX FOR GIVING YOUR FEED BACK\n");
       printf("\n \nTO GO MAIN MENU PRESS <ENTER>\n \nTO EXIT PRESS <ESC> ");
        vh=getch();
        if(vh==ENTER)
        {
            system("cls");
            option();
        }else if(vh==ESC)
        {
           system("cls");
           gotoxy(40,12);
           printf("<<<THANX FOR GIVING US TIME>>>");
           getch();
           exit(0);
        }else{

            goto ret;
        }




   }else if (ch=='4')
   {
       system("cls");
       gotoxy(40,12);
       system("color 0a");
       printf("<<<  WILL MEET AGAIN >>>");
       getch();
       exit(0);
   }
       else
   {
       system("cls");
       printf("\a");
       option();
   }
}






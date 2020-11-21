void studentportal(void);
void booktakenlist(void);
void SetColor(int ForgC);
void booktaking(char []);
void deleted(void);
void studentidentifications (char usn[]);

struct student{

int student_usn,book_id;
char student_name[89], book_name[89];
float student_age,book_price,book_fine;



};

void studentportal(void)

{
  struct student booki;
    char ch;
SetConsoleTitle("HIMANSHU SHARMA..");
    system("color 03");
    gotoxy(40,7);
    SetColor(34);
    printf("1: BORROW THE BOOK...");
    gotoxy(40,9);
    SetColor(55);
    printf("2: SEE THE TAKEN BOOKS LISTS.. ");
    gotoxy(40,11);
SetColor(43);
    printf("3: DELETE ALL THE TAKEN BOOKS LISTS..");
    gotoxy(40,13);
SetColor(70);
    printf("4: GO BACK..");
    gotoxy(40,15);
    SetColor(44);
    printf("5: EXIT");
    gotoxy(40,18);
    printf("==>\t");
    ch=getche();
    if (ch=='1')
    {     system("cls");
    gotoxy(40,12);
  system("color 03");
        printf("ENTER THE BOOK ID....");
        scanf("%d",&booki.book_id);
        fflush(stdin);
        gotoxy(40,14);
        printf("ENTER THE BOOK NAME....");
        gets(booki.book_name);
       booktaking(booki.book_name);
       {
            char lo; st3:
            gotoxy(0,0);
            SetColor(55);
            printf("\nTO GO BACK PRESS <BKSP>\n");
                gotoxy(80,2);
                SetColor(44);
            printf("TO EXIT PRESS <ESC>");
            lo=getch();
            if(lo==BKSP)
            {  system("cls");
                studentportal();
            }else if(lo==ESC)
            {
                system("cls");
                      gotoxy(40,12);
                      system("color 0c");
                printf("GET WELL SOON");
                getch();
                exit(0);
            }
            goto st3;

        }
    }else if(ch=='2')
    {     st1: system("cls");
    system("color 0c");
       booktakenlist();

        {
            char v;
            gotoxy(0,0);

            printf("\nTO GO BACK PRESS <BKSP>\n");
                gotoxy(80,2);
            printf("TO EXIT PRESS <ESC>");
            ch=getch();
            if(ch==BKSP)
            {  system("cls");
                studentportal();
            }else if(ch==ESC)
            {
                system("cls");
                      gotoxy(40,12);
                      system("color 02");
                printf("GET WELL SOON");
                getch();
                exit(0);
            }
            goto st1;

        }
    }else if(ch=='4')
    {
        option();

    }else if(ch=='5')
    {  system("cls");
        gotoxy(40,12);
        system("color 03");
        printf("THANX FOR VISITING US");
        getch();
        exit(0);
    }else if(ch=='3')
    {
        deleted();
    }
        else
    {
        printf("\a");
        studentportal();
    }


}
void studentidentifications (char usn[])
{
     if(usn[0]=='C'&&usn[1]=='S')
     {
      if(usn[2]=='0'&&usn[3]=='3'&&usn[4]=='5')
       {
           SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("HIMANSHU KUMAR SHARMA");
 gotoxy(48,1);
 printf("C.S.E");

           studentportal();
       getch();

       exit(0);
     }
     else if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='1')
     {
                    SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ABIGNYA REDDY");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='3')
     {
                    SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ABISHEK ROY");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);
     }  else if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='1')
     {
                    SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ASWINI P");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='5')
     {
                    SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("BHAVANI P");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);
     }

      else if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='9')
     {
                    SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("CHANDAN T K");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     }  else if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='3')
     {
                    SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("DEEKSHITHA ");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='6')
     {
                    SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("EERAPARAJU BHARATH");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     }  else if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='8')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("GOUTHAM GALGOTIA");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='9')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("GURUDUTT YADAV");
 gotoxy(48,1);
 printf("C.S.E");
       studentportal();
       getch();

       exit(0);
     }  else if(usn[2]=='0'&&usn[3]=='3'&&usn[4]=='0')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("H ANUSHREE");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='3'&&usn[4]=='1')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("HANSITHA K");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='6'&&usn[4]=='0')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("MUSKAAN KUMARI");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);

     } else if(usn[2]=='1'&&usn[3]=='0'&&usn[4]=='9')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("UMESH SINGH BIST");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='1'&&usn[3]=='2'&&usn[4]=='5')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ALISHA EUROVEE");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='5'&&usn[4]=='9')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("MOZAMMIL HUSSAIN (KABEER)");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='9'&&usn[4]=='0')
     { SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SAGAR P C");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);

     } else if(usn[2]=='0'&&usn[3]=='3'&&usn[4]=='2')
     {
          SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("HARSHA V M");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);

     } else if(usn[2]=='0'&&usn[3]=='4'&&usn[4]=='3')
     {  SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("KIRAT T");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='4'&&usn[4]=='7')
     { SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("LAVANYA M");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='1'&&usn[3]=='1'&&usn[4]=='7')
     { SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("VIDYASHREE S R");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='7'&&usn[4]=='7')
     { SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("G B PRATHIBA");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='6'&&usn[4]=='6')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("NEHA MOHRE ");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);

     } else if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='4')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("BHANUPRIYA G");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);

     } else if(usn[2]=='0'&&usn[3]=='7'&&usn[4]=='9')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("PUSHPA YADAV");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='9'&&usn[4]=='5')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SAHID IRFAN");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='9'&&usn[4]=='7')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SNEHA A");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='7')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("BHOOMIKA P");
 gotoxy(48,1);
 printf("C.S.E");
        studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='6'&&usn[4]=='9')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("VAMSI ");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='7'&&usn[4]=='4')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("PRANITH JAIN");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);

     } else if(usn[2]=='1'&&usn[3]=='0'&&usn[4]=='0')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SUBASHINI P");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);

     } else if(usn[2]=='0'&&usn[3]=='5'&&usn[4]=='0')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("MANOJ KUMAR");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='4'&&usn[4]=='8')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("RAKESH M");
 gotoxy(48,1);
 printf("C.S.E");
          studentportal();
       getch();

       exit(0);
     } else if(usn[2]=='0'&&usn[3]=='5'&&usn[4]=='4')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("MD ISHAK");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);

     } else if(usn[2]=='0'&&usn[3]=='6'&&usn[4]=='3')
     {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("NANDINI J");
 gotoxy(48,1);
 printf("C.S.E");
         studentportal();
       getch();

       exit(0);
     }else
     {  ex:
         system("cls");
         gotoxy(40,12);
         printf("ERROR IN LOADING PLZ TRY AGAIN ....");
         {
             char v;
             gotoxy(1,1);
             printf("TO CONTUNUE PRESS <ENTER>");
              gotoxy(1,3);
              printf("TO EXIT PRESS <ESC>");

              v=getch();
              if(v==ENTER)
              {
                  system("cls");
                  option();

              }else if(v==ESC)
              {
                  system("cls");
                  gotoxy(40,12);
                  printf("***** NICE MEET YOU *****");
                  getch();
                  exit(1);
              }else
              {
                  system("cls");
                  goto ex;
              }
         }

     }

}else  if(usn[0]=='I'&&usn[1]=='S')
{
   if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='1')
   {
         SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ADITYA R");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='2')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("AISHWARYA M T");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='6')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("CHALANA SHREE");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='9')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("HARDEEP SINGH");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='0')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("HUMNABAD JASHMITHA REDDY");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='1')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("LAVANYA S");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='2')
   {SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" MD SUNNY ASHIQ");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);

   }else  if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='6')
   {SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("PRATIK JUNG SHAH ");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);

   }else  if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='9')
   {SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" SUDIPTA THE THARKI MAN");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);

   }else  if(usn[2]=='0'&&usn[3]=='3'&&usn[4]=='3')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("YOUASHREE ");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='8')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("RAGHU ");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='3')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SANJANA SAMIKSHA N H");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='6')
   {SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SHASHIKANTH HOOGAR");
 gotoxy(48,1);
 printf("I.S.E");

           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='3'&&usn[4]=='4')
   {SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("BIBEK REGMI ");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);

   }else  if(usn[2]=='0'&&usn[3]=='3'&&usn[4]=='1')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SAYED SHAYANARSAL");
 gotoxy(48,1);
 printf("I.S.E");
           studentportal();
       getch();

       exit(0);
   }else



        {  ex1:
         system("cls");
         gotoxy(40,12);
         printf("ERROR IN LOADING PLZ TRY AGAIN ....");
         {
             char v;
             gotoxy(1,1);
             printf("TO CONTUNUE PRESS <ENTER>");
              gotoxy(1,3);
              printf("TO EXIT PRESS <ESC>");

              v=getch();
              if(v==ENTER)
              {
                  system("cls");
                  option();

              }else if(v==ESC)
              {
                  system("cls");
                  gotoxy(40,12);
                  printf("***** NICE MEET YOU *****");
                  getch();
                  exit(1);
              }else
              {
                  system("cls");
                  goto ex1;
              }

   }


}
}else  if(usn[0]=='M'||usn[0]=='m'&&usn[1]=='e'||usn[1]=='E')
{
   if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='1')
   {
 SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("HEMKESHA N");
 gotoxy(48,1);
 printf("M.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='2')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("JASEEM S M");
 gotoxy(48,1);
 printf("M.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='3')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("KISHORE S V");
 gotoxy(48,1);
 printf("M.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='5')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("MOKSHANGA");
 gotoxy(48,1);
 printf("M.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='6')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("PRANAV P");
 gotoxy(48,1);
 printf("M.E");
           studentportal();
       getch();

       exit(0);
   }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='7')
   {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SINGARAVELU S");
 gotoxy(48,1);
 printf("M.E");
           studentportal();
       getch();

       exit(0);
   }else
   {
      ex3:
         system("cls");
         gotoxy(40,12);
         printf("ERROR IN LOADING PLZ TRY AGAIN ....");
         {
             char v;
             gotoxy(1,1);
             printf("TO CONTUNUE PRESS <ENTER>");
              gotoxy(1,3);
              printf("TO EXIT PRESS <ESC>");

              v=getch();
              if(v==ENTER)
              {
                  system("cls");
                  option();

              }else if(v==ESC)
              {
                  system("cls");
                  gotoxy(40,12);
                  printf("***** NICE MEET YOU *****");
                  getch();
                  exit(1);
              }else
              {
                  system("cls");
                  goto ex3;
              }
   }

   }

}else  if(usn[0]=='C'&&usn[1]=='V')
{
     if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='1')
     {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ASHWINI KUMAR");
 gotoxy(48,1);
 printf("C.V");
           studentportal();
       getch();

       exit(0);
     }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='2')
     {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ABZAL ANSARI");
 gotoxy(48,1);
 printf("C.V");
           studentportal();
       getch();

       exit(0);
     }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='3')
     {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" AMAR KUMAR YADAV");
 gotoxy(48,1);
 printf("C.V");
           studentportal();
       getch();

       exit(0);
     }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='4')
     {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ARIF ANSARI");
 gotoxy(48,1);
 printf("C.V");
           studentportal();
       getch();

       exit(0);
     }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='5')
     {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ARUN KUMAR B");
 gotoxy(48,1);
 printf("C.V");
           studentportal();
       getch();

       exit(0);
     }else  if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='6')
     {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" AYAN RAJ");
 gotoxy(48,1);
 printf("C.V");
           studentportal();
       getch();

       exit(0);
     }else  if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='0')
     {

SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("MUKUND YADAV");
 gotoxy(48,1);
 printf("C.V");
           studentportal();
       getch();

       exit(0);
     }else  if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='2')
     {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("  SUVAM GACHHADAR");
 gotoxy(48,1);
 printf("C.V");
           studentportal();
       getch();

       exit(0);
     }else
     {
         ex5:
         system("cls");
         gotoxy(40,12);
         printf("ERROR IN LOADING PLZ TRY AGAIN ....");
         {
             char v;
             gotoxy(1,1);
             printf("TO CONTUNUE PRESS <ENTER>");
              gotoxy(1,3);
              printf("TO EXIT PRESS <ESC>");

              v=getch();
              if(v==ENTER)
              {
                  system("cls");
                  option();

              }else if(v==ESC)
              {
                  system("cls");
                  gotoxy(40,12);
                  printf("***** NICE MEET YOU *****");
                  getch();
                  exit(1);
              }else
              {
                  system("cls");
                  goto ex5;
              }
     }



}
}else  if(usn[0]=='E'&&usn[1]=='C')
{
    if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='1')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" ABHILASH C");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='2')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" ANIRBAN SANKI");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='3')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("ANIYA KAUSAR");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else if(usn[2]=='0'&&usn[3]=='0'&&usn[4]=='5')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" BHARATH B");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='4')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" MAMTA KUMARI");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else if(usn[2]=='0'&&usn[3]=='1'&&usn[4]=='0')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("GLORY DSOUZA R");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='1')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("PRIYANKA KUMARI");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else if(usn[2]=='0'&&usn[3]=='3'&&usn[4]=='0')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("RISHI VARDAN");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='5')
    {SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf(" SUDEEP N");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);

    }else if(usn[2]=='0'&&usn[3]=='2'&&usn[4]=='3')
    {
SYSTEMTIME T;

GetSystemTime(&T);
system("cls");
gotoxy(93,1);
printf("%d/%d/%d",T.wDay,T.wMonth,T.wYear);
 gotoxy(0,1);
 printf("SATHAVIKA G B ");
 gotoxy(48,1);
 printf("E.C");
           studentportal();
       getch();

       exit(0);
    }else
    {
       ex7:
         system("cls");
         gotoxy(40,12);
         printf("ERROR IN LOADING PLZ TRY AGAIN ....");
         {
             char v;
             gotoxy(1,1);
             printf("TO CONTUNUE PRESS <ENTER>");
              gotoxy(1,3);
              printf("TO EXIT PRESS <ESC>");

              v=getch();
              if(v==ENTER)
              {
                  system("cls");
                  option();

              }else if(v==ESC)
              {
                  system("cls");
                  gotoxy(40,12);
                  printf("***** NICE MEET YOU *****");
                  getch();
                  exit(1);
              }else
              {
                  system("cls");
                  goto ex7;
              }
    }

}
}
   else
{

    {
       ex9:
         system("cls");
         gotoxy(40,12);
         printf("YOU ENTERED SOMETHING WRONG PLZ USE CAPITAL LETTERS");
         {
             char v;
             gotoxy(1,1);
             printf("TO CONTUNUE PRESS <ENTER>");
              gotoxy(1,3);
              printf("TO EXIT PRESS <ESC>");

              v=getch();
              if(v==ENTER)
              {
                  system("cls");
                  option();

              }else if(v==ESC)
              {
                  system("cls");
                  gotoxy(40,12);
                  system("color 06");
                  printf("***** NICE MEET YOU *****");
                  getch();
                  exit(1);
              }else
              {
                  system("cls");
                  goto ex9;
              }
}




}
}


}

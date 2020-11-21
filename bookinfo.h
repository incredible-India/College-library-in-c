#include<string.h>
void bookinfo(char d[])
{
SYSTEMTIME T;
GetSystemTime(&T);

    FILE *p;
    p=fopen("bookinfo.dat","a");
    fprintf(p,"\n");
    fprintf(p,"\n \n \n");
    fprintf(p,"%d/%d/%d",T.wDay,T.wMonth,T.wYear);
    fprintf(p,"___________________________________");
    fprintf(p,"1SP19");
    fputs(strupr(d),p);

    fclose(p);
}
void booktakenlist(void)
{

    FILE *p;
    p=fopen("bookinfo.dat","r");
    char ch[100];
    system("color 72");
    if(p==NULL)
    {
        system("cls");
        gotoxy(40,12);
        printf("ALL DATA IN LIST HAS BEEN DELETED");
    }
    while(fgets(ch,9,p)!=NULL)
    {
        printf("%s",ch);
    }
    fclose(p);


}
void booktaking(char gh[])
{
    FILE *p;
    p=fopen("bookinfo.dat","a");
    fprintf(p,"\n \n");
    fputs(strupr(gh),p);
    fclose(p);




}
void deleted(void)
{


    int k;
    k=remove("bookinfo.dat");

    if(k==0)
    {
        system("cls");
        gotoxy(40,12);
        printf("LIST DELETED SUCCESSFULLY..");
getch();

    }else
    {
          system("cls");
        gotoxy(40,12);
        system("color 7c");
        printf("FILE CONOT BE DELETED PLZ TRY AGAIN..");
        getch();
    }

  char lo; st5:
            gotoxy(0,1);
            SetColor(39);
            printf("\nTO GO BACK PRESS <BKSP>\n");
                gotoxy(80,1);
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
                      system("color 7A");
                printf("GET WELL SOON");
                getch();
                exit(0);
            }
            goto st5;
}

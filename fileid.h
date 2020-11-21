void stdetail(void);
void idread(void)

{
FILE *p;
p=fopen("id2password.txt","r");
if(p==NULL)
{
    printf("ERROR 404....SEGMENT ERROR");
    getch();
}
char ch;

while(!feof(p))
{
  printf("%c",ch);
  ch=fgetc(p);

}
fclose(p);




}
void idwrite(int a)
{
FILE *p;
p=fopen("id password.txt","w");
fprintf(p,"%d",a);


fclose(p);




}
void idwrite2(char ch[])
{
FILE *p;
p=fopen("id password.txt","a");
fprintf(p,"\npassword...\t");
fputs(ch,p);


fclose(p);




}
void stdetail(void)
{



    FILE *p;
    system("color 03");
    p=fopen("all usnno.txt","r");
   char ch[80];;

  while(fgets(ch,9,p)!=NULL)
 {
       printf("%s",ch);
   }
}

void feedback(char fee[])
{
    int i;
    FILE *p;
    p=fopen("feedback.txt","a");
    fprintf(p,"\nfeedback is...\n");
    for(i=0;i<=strlen(fee);i++)
    {
        fputc(fee[i],p);
    }
    fclose(p);


}

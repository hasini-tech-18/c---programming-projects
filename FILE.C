#include<stdio.h>
#include<conio.h>
int main()
{
FILE*fp;
char ch;
//Write Mode
fp=fopen("data.txt","w");
if(fp==NULL)//it is check file creation
{
printf("error");
}
fprintf(fp,"welcome to c programming");
fclose(fp);
fp=NULL;
//Read Mode
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("error");
}
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
fp=NULL;
//Append Mode
fp=fopen("data.txt","a");
if(fp==NULL)
{
printf("error");
}
else
{
fprintf(fp,"Good teaching.easy to understand.friendly teacher.clear explanation.interactive sessions");
fclose(fp);
fp=NULL;
}
return 0;
}








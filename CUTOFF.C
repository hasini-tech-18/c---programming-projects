#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main(int argc,char*argv[])
{
int m1,m2,m3,m4,m5,total;
float average;
char name[30];
if(argc!=7)
{
clrscr();
printf("USAGE:/a.out NAME M1 M2 M3 M4 M5\N");
return 0;
}
strcpy(name,argv[1]);
m1=atoi(argv[2]);
m2=atoi(argv[3]);
m3=atoi(argv[4]);
m4=atoi(argv[5]);
m5=atoi(argv[6]);
total=m1+m2+m3+m4+m5;
average=total/5.0;
printf("\n=======STUDENT REPORT=======\n");
printf("STUDENT NAME: %s\n",name);
printf("Mark 1:%d\n",m1);
printf("Mark 2:%d\n",m2);
printf("Mark 3:%d\n",m3);
printf("Mark 4:%d\n",m4);
printf("Mark 5:%d\n",m5);
printf("TOTAL:%d\n",total);
printf("AVERAGE:%f\n",average);
if(m1<35||m2<35||m3<35||m4<35||m5<35)
{
printf("RESULT:pass\n");
if(average>=90)
printf("GRADE :A+\n");
else if(average>=80)
printf("GRADE :A\n");
else if(average>=70)
printf("GRADE :B\n");
else if(average>=60)
printf("GRADE :C\n");
else
printf("GRADE :D\n");
}
return 0;
}

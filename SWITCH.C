#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,choice;
printf("enter two numbers:");
scanf("%d%d, &a,&b");
do
{
printf("\n=====calculator=====\n");
printf("\n1. adittion");
printf("\n2. subraction");
printf("\n3. multiplication");
printf("\n4. division");
printf("\n5. exit");
printf("\n enter your choice:");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("addition=%d", a+b);
break;
case 2:
printf("subraction=%d", a-b);
break;
case 3:
printf("multiplication=%d", a*b);
break;
case 4:
printf("division=%d", a/b);
break;
case 5:
printf("existing the program...");
break;
default:
printf("invalid choice!");
}
}
while(choice!=5);
getch();
return 0;
}















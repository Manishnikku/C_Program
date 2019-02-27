#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
add();
sub() ;
divide();
multi()  ;
getch();
}
add()
{
int a,b,c;
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("ans");
printf("%d\n",c);
return 0;
}
sub()
{
int e,f,g;
printf("enter the value of e and f\n");
scanf("%d%d",&e,&f);
g=e-f;
printf("ans");
printf("%d\n",g);
return 0;
}
divide()
{
int h,i,j;
printf("enter the valu h and i\n ");
scanf("%d%d",&h,&i);
j=h/i;
printf("ans");
printf("%d\n",j);
return 0;
}
multi()
{
int k,l,m;
printf("enter the value of k and l\n");
scanf("%d%d",&k,&l);
m=k*l;
printf("ans");
printf("%d\n",m);
return 0;
}


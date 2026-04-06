#include<stdio.h>
void main()
{
 float x1,x2,a,b,c,d,m,n;
printf("enter a,b,c,d,m,n");
scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&m,&n);
if((a*d-c*d)==0) printf("not defined");
else
{
 x1=(m*d-b*n)/(a*d-c*b);
 x2=(n*a-m*c)/(a*d-c*b);
printf("x1=%f and x2=%f",x1,x2);
}
}

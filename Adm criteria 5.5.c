#include<stdio.h>
void main()
{
  int math,phy,chem,total;
printf("enter marks in maths,physics,chem:");
scanf("%d %d %d",&math,&phy,&chem);
total=phy+chem+math;
if(math>=60||phy>=50||chem>==40||total>=200||(math+phy)>=150)
{
 printf("eligible");
}
else
{
 printf("not eligible");
}
}

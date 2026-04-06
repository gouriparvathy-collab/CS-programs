#include<stdio.h>
int main(){
int n,i,x;
int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
if(x>80)c1++;
if(x>60)c2++;
if(x>40)c3++;
if(x<=40)c4++;
if(x>=81&&x<=100)c5++;
if(x>=61&&x<=80)c6++;
if(x>=41&&x<=60)c7++;
if(x>=0&&x<=40)c8++;
}
printf("%d %d %d %d %d %d %d %d",c1,c2,c3,c4,c5,c6,c7,c8);
return 0;
}

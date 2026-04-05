//computing Diameter,Area,Perimeter of circle using seperate fn


#include<stdio.h>
#include<math.h>
#define PI 3.14
float x1,x2,Y1,Y2,D;
void Diameter();
void Area();
void Perimeter();
int main()
{
    printf("Enter coordinates of first point:\n");
    scanf("%f %f",&x1,&Y1);
    printf("Enter coordinates of second point:\n");
    scanf("%f %f",&x2,&Y2);
    Diameter();
    Area();
    Perimeter();
    return 0;
}
void Diameter()
{
    D = sqrt(pow(x2-x1,2) + pow(Y2-Y1,2));
    printf("\nDiameter of circle = %f",D);
    printf("\nInteger value of diameter = %d",(int)D);
}
void Area()
{
    float A;
    A = PI * pow(D/2,2);
    printf("\nArea of circle = %f",A);
    printf("\nInteger value of area = %d",(int)A);
}
void Perimeter()
{
    float P;
    P = PI * D;
    printf("\nPerimeter of circle = %f",P);
    printf("\nInteger value of perimeter = %d",(int)P);
}

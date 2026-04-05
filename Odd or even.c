//a) without else
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("NUMBER IS EVEN");
    if (num % 2 != 0)
        printf("NUMBER IS ODD");
    return 0;
}

//b)with else
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("NUMBER IS EVEN");
    else
        printf("NUMBER IS ODD");
    return 0;
}

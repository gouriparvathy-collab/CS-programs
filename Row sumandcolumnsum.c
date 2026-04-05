#include <stdio.h>

int main() 
{
    int a[3][3];
    int i, j;
    int rowsum,colsum;
    printf("Enter 9 elements:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Row sums:\n");
    for(i = 0; i < 3; i++) 
    {
        rowsum = 0;
        for(j = 0; j < 3; j++) 
        {
            rowsum += a[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowsum);
    }
    printf("Column sums:\n");
    for(j = 0; j < 3; j++) 
    {
        colsum = 0;
        for(i = 0; i < 3; i++)
        {
            colsum += a[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}

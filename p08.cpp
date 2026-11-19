#include <stdio.h>
#include <stdlib.h>
#define size 10
int main(void)
{
    int n[size] = {10,12,32,54,62,84,95,62,31,15};

    printf("%s%13s%17s\n", "Element", "Value", "Historgram");

    for (int i = 0;i < size;i++)
    {
        printf("%d%19d       ", i, n[i]);
        for (int j = 0;j < n[i];j++) {
            printf("*");
        }
        printf("\n");
    }
     
  
    system("pause");
    return 0;
}
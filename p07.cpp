#include <stdio.h>
#include <stdlib.h>
#define size 10
int main(void)
{
    int n[size] = {10,12,32,54,62,84,95,62,31,15};
    int i, total = 0;

    for (i = 0;i < size;i++)
    {
        total+=n[i];
    }
     printf("Total=%d",total);
  
    system("pause");
    return 0;
}
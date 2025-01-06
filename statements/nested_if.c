#include <stdio.h>
int main()
{
    int var1, var2;
    printf("input value of var 1:");
    scanf("%d", &var1);
    printf("input value of var 2:");
    scanf("%d", &var2);

    if(var1 != var2)
    {
        printf("var1 is not equal to var 2\n");
        if(var1 > var2)
        printf("var1 is greater than var 2");
        else
        printf("var 2 is greater than var 1");
    }
    else
        printf("var 1 is equal to var 2");
    return 0;
}
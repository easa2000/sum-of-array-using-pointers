//sum of array using pointers
#include<stdio.h>
main()
{
    int a[] = {11,22,45,65,76};
    int sum = 0, *p;
    for(p = &a[0]; p <= &a[4]; p++)
    {
        sum += *p;
    }
    printf("\n Sum = %d",sum);
}

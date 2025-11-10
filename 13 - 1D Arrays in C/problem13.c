#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));

    
    int i = 0 ;
    while (i < n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    
    i = 0 ;
    int res = 0 ;
    while (i < n)
    {
        res = res + arr[i] ;
        i++;
    }
    printf("%d",res);
}
#include <stdio.h>
void RevArr(int n,int arr[])
{
        
    int first = 0 ;
    int temp ;
    int last =  n - 1 ;

    while ( first < last )
    {
            temp  = arr[first] ;
            arr[first] = arr[last] ;
            arr[last]  = temp ;
            first++;
            last--;
            n--;
    }
}
int main()
{
    int n ;
    scanf("%d",&n);
    int arr[n] ;
    int i = 0 ;
    while (n > i)
    {
        scanf("%d ",&arr[i]);
        i++;
    }
    RevArr(n,arr);
    i = 0 ;
    while (n > i)
    {
        printf("%d ",arr[i]);
        i++;
    }
}
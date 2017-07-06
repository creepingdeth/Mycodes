// Turn off the rightmost set bit
// created on 7/5/2017

#include<stdio.h>
int set(int x)
{
    return x&(x-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf ("after setting rightmost set bit to off  %d",set(n) );
    return 0;
}

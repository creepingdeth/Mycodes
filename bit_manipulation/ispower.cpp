// Find whether a given number is a power of 4 or not
// created on 7/5/2017
#include<iostream>
#include<stdio.h>
using namespace std;
bool is_powerof4(unsigned int n)
{
    int count=0;
    if(n && ! (n&(n-1)))
    {
        while(n>1)
        {
            n>>=1;
            count++;
        }
        return (count%2==0)?1:0;
    }
       return 0;
}
int main()
{
    unsigned int n;
    scanf("%ud",&n);
    if(is_powerof4(n))
        printf("%d is power of four",n);
    else printf("%d is not a power of four",n);
    return 0;
}

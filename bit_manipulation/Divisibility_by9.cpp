// Check if a number is multiple of 9 using bitwise operators
// created on 7/5/2017

#include<iostream>
#include<stdio.h>
using namespace std;
bool isdby9(int n)
{
    if(n==0 || n==9)
        return true;
    if(n<9)
        return false;
    return isdby9((int)(n>>3) - (int)(n&7));
}
int main()
{
    int n;
    printf("Enter number \n");
    scanf("%d",&n);
    if(isdby9(n))
        printf("Divisible by 9");
    else printf("Non divisible by 9");
    return 0;
}

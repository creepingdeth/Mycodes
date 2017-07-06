
//Detect if two integers have opposite signs using bit operation
//created on 7/5/2017

#include<iostream>
#include<stdio.h>
using namespace std;
bool sign(int a,int b)
{
    return((a^b )<0); //return((a^b) >>31);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if( sign(a,b)==true)
        printf("oppposite sign\n");
    else printf("same sign\n");
    return 0;
}

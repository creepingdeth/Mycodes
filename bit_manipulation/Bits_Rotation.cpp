// Rotate bits of a number
// created on 7/5/2017

//=============================================================

#include<stdio.h>
int size=32;
int lr(int n ,int m) // left rotate
{

    return(n<<m)|(n>>(size-m));
}
int rr(int n, int m) //right rotate
{
    return(n>>m)|(n>>(size-m));
}
int main()
{
    int n,m;
    printf(" enter decimal number and number of bits to rotate\n" );
    scanf("%d%d",&n,&m);
     printf("Left Rotation of %d by %d is",n,m);
  printf("%d",lr(n,m));
  printf("\nRight Rotation of %d by %d is",n,m);
  printf("%d", rr(n,m));
  return 0;
}

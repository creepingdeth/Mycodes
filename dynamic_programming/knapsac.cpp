#include<stdio.h>
int max(int a,int b){return (a>b)?a:b;}
int knapsac(int w1,int wt[],int val[],int n)
{
    int i,w;
    int k[n+1][w+1];

    for(i=0;i<=n;i++)
    {
      for (w=0;w<=w1;w++)
            {
                if(i==0 || w==0)
                    k[i][w]=0;
                else if(wt[i-1]<=w)
                    k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
                else k[i][w]=k[i-1][w];
            }
    }
    return k[n][w1];
}

int main()
{
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int w1=50;
    int n=sizeof(val)/sizeof(val[0]);
    printf("%d",knapsac(w1,wt,val,n));
    return 0;
}

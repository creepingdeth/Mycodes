#include <stdio.h>
int main()
{
     int n;
     char *s;
     int hash[26];
     int i;
     int count;
     int flag;
     s=(char*)malloc(sizeof(char)*1000000);
     scanf("%d",&n);
     while(n--)
     {
          i=0;
          flag=0;
          memset(hash,0,sizeof(hash));
          count=0;
          scanf("%s",s);
          while(*(s+i))
          {
               hash[*(s+i)-'a']++;
               if(hash[*(s+i)-'a']>=2)
               {
                    count++;
                    hash[*(s+i)-'a']-=2;
               }
               if(count==1)
               {
                    printf("Yes\n");
                    flag=1;
                    break;
               }
               i++;
          }
          if(!(flag))
               printf("No\n");
     }
     return 0;
}




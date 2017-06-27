

#include <bits/stdc++.h>
using namespace std;
int main()
{
 int test;
 cin>>test;
 while(test--)
 {
  string S,T;
  cin>>S>>T;
  int hashS[26]={0};
  int hashT[26]={0};
  for(int i=0;i<S.size();i++)
   hashS[S[i]-'a']++;
  for(int i=0;i<T.size();i++)
   hashT[T[i]-'a']++;
  int count=0;
  for(int i=0;i<26;i++)
  {
   if(hashS[i]-hashT[i]>0)
    count+=hashS[i]-hashT[i];
   if(hashS[i]-hashT[i]<0)
    count+=hashT[i]-hashS[i];
  } 
  cout<<count<<endl;
 }
 return 0;
}


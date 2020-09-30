#include <bits/stdc++.h>
using namespace std;
const int m=200;
bool result(string s1,string s2){
   int c[m]={0};
   for(int i=0;i<s1.length();i++){
       c[s1[i]]++;
   }
   for(int i=0;i<s2.length();i++){
       if(c[s2[i]]==0)
           return false;
       c[s2[i]]--;
   }
   return true;
}
int main()
{
   string s1,s2;
   cin>>s1;
   cin>>s2;
   if(result(s1,s2)){
       cout<<"true";
   }
   else{
       cout<<"false";
   }
}


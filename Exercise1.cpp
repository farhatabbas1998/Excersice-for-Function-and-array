#include<iostream>

#include<string>

using namespace std;

int main()
{
int x=0,y=0;
   string word;
   cout << "Enter string to be converted: ";
   cin>>word;
cout << "Converted string is: ";
while (word[x] != '\0')
{
y = int(word[x]);
if(y==90 || y==122){
if(y==90)
y=64;
else
y=96;
}
cout<< char(y+1);
x++;
}
   return 0;
}
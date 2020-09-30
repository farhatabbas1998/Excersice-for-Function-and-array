#include<iostream>
using namespace std;

int TriangularNumberSequence(int n){
   return n*(n+1)/2;
}

int main(){
   cout<<TriangularNumberSequence(1)<<endl;
   cout<<TriangularNumberSequence(3)<<endl;
   cout<<TriangularNumberSequence(6)<<endl;
   cout<<TriangularNumberSequence(10)<<endl;
   cout<<TriangularNumberSequence(15)<<endl;
   return 0;
}

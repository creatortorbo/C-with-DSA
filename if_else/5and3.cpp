#include<iostream>
using namespace std;
int main (){
   int n;
   cout<<"Enter a number :";
   cin>>n;
   if(n%5==0 && n%3==0){
      cout<<"Divisable by 5 and 3";
   }  
   else{
      cout<<"not divisable 5 and 3 both";
   }
return 0;
}
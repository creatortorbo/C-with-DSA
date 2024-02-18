#include<iostream>
using  namespace std;
int main (){
   float x;
   cin>>x;//9.1
   int y = (int)x;
   float z = (float)y;
   x = x - z;
   cout<<x;

}
#include<iostream>
using namespace std;
int main(){
     int a = 16;  // a means dividend 
     int b = 3;   // b is divisor 
     int q = a/b;   // q is quotient
     int r;    //  r is remainder
//      r = a -(b*q);  
     r = a - (b*q);   
     cout<<r;
return 0;
}
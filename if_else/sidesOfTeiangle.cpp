#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter a 1st number :";
    cin>>a;
    int b;
    cout<<"Enter a 2nd number :";
    cin>>b;
    int c;
    cout<<"Enter a 3rd number :";
    cin >>c;
      if((a+b>c) && (b+c>a) && (c+a>b)){
          cout<<a<<","<<b<<","<<c<<" can be the sides of a tringle ";
      }
      else {
         cout<<"Invalid Traingle";
      }
}
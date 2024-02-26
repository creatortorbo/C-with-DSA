#include<iostream>
using namespace std;
int main ()
{
     int n;
     cout<<"Enter a number ";
     cin>>n;
       if(n%5==0){
        cout<<"It is desible by 5 "<<endl;
       }
       else{
        cout<<"It is not divisble by 5"<<endl;

       }
       if(n%3==0){
        cout<<"It is divisible by 3"<<endl;

       }
       else{
       cout<<"It is not divisble by 3"<<endl;
       }
}
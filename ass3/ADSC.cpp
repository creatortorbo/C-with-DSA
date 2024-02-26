#include<iostream>
using namespace std;
int main (){
    char n;
    cout<<"Enter a chra :";
    cin>>n;
     if(n>='a' && n<='Z' || (n>='A' &&  n<='z'))
       cout<<"Alphabets";
     else if(n>='0'&& n>='9')
       cout<<"Digits";
     else 
        cout<<n<< "special character";
     

}
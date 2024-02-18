#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a integer :";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"It is devisible by 5 or 3";
    }
    else{
       cout<<"It is not devisible by 5 or 3";
    }
} 

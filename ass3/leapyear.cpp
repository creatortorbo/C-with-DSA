#include<iostream>
using namespace std;
int main (){
      int x;
      cout<<"Enter a number :";
      cin>>x;
//         if(x%4==0)  cout<<"Leap year";
//         else cout<<"Not Leap year";
        if(x%400==0)  cout<<"Leap year";
        else if(x%100==0) cout<<"Not a Leap year";
        else if(x%4==0)  cout<<"Leap year";
        else cout<<"Not a leap year";
        

        
}
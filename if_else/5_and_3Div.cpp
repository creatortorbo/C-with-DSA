#include<iostream>
using namespace std;
int main (){
      int n;
      cout<<"Enter a integer :";
      cin>>n;
      if (n%5==0){
          if(n%3==0){
            cout<<"It is divisble by 3"<<endl;
          }
          else{
                cout<<"It is not divisble by 3"<<endl;
          }
        cout<<"It is divisible by 5"<<endl;
      }
      else{
         cout<<"It is not divisible by 5";
      }
   return 0;
}

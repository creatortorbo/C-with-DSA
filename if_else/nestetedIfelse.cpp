#include<iostream>
using namespace std;
int main (){                        

      int n;
      cout<<"Enter a postive integer :";
      cin>>n;
      if(n%5==0 || n%3==0){
         if(n%15!=0){
           cout<<"It is not divisble by 15";
         }

         cout<<"It is devisible by 5 and 3";
      }
      else{
          cout<<"Not dividible by 5 and 3";
      }
 return 0;
}
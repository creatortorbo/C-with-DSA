#include<iostream>
using namespace std;
int main (){ 
    int a;
    cout<<"Enter 1st students marks :";
    cin>>a;
    int b;
    cout<<"Enter 1st students marks :";
    cin>>b;
    
    int c;
    cout<<"Enter 1st students marks :";
    cin>>c; 
//       if(a<=b && a<=c)  cout<<a;
//       else if (b<=a && b<=a)  cout<<b;
//       else cout<<c;
if(a<=b){
       if(a<=c) cout<<a;
       else {
          cout<<c;

       }
    
}
   else {  
            if (b<=c)  cout<<b;
            else cout<<c;
       }

}
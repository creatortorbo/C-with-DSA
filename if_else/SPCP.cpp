#include<iostream>
using namespace std;
int main(){
     int cp;
     cout<<"Enter the cost price :";
     cin>>cp;
     int sp;
     cout<<"Enter the selling price :";
     cin>>sp;
     if(sp>cp){
          int profit = sp-cp;
        cout<<"profit = "<<profit;
     }
     if(cp>sp){
       int loss = cp-sp;
      cout<<"Loss = "<<loss;
     }
     if(sp==cp){
     cout<<"No profit,No Loss";

return 0;
     }
return 0;
}
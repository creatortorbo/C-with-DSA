#include<iostream>
using namespace std;
int main (){
       int radius;
       cout<<"Enter a radius of the cricle :";
       cin>>radius;
       float  pi = 3.14;
       float citcumference = 2 * pi * radius;
       float area = pi *  radius * radius;
         if (area>citcumference){
           cout<<"here the area is larger then circleframes  "<<endl;
         }
         else{
           cout<<"here the area is not larger then then circleframes : "<<endl;

         }
         

  
}
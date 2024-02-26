#include<iostream>
using namespace std;
int  main (){
    int length,breadth;
    cout<<"Enter a length :";
    cin>>length;
    cout<<"Enter a breadth :";
    cin>>breadth ;
     int area = length * breadth;
     int perimeter = 2 * (length * breadth);
      if(area>perimeter){
          cout<<"here is area is greater than premeter";

      }
      else{
           cout<<"here is preimeter is not than area";
      }
      


}
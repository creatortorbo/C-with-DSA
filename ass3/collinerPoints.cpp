#include<iostream>
using namespace std;
int main () {
     float x1,y1,x2,y2,x3,y3;
     cout<<"Enter 1st point :";
     cin>>x1>>y1;
     cout<<"Enter 2st point :";
     cin>>x2>>y2;
     cout<<"Enter 1st point :";
     cin>>x3>>y3;
//      float m1 =  (y2-y1)/(x2-x1);
//      float m2 =  (y3-y2)/(x3-x2);
//       if(m1==m2)  cout<<"colliner";
   int ans = (x2*y3 - y2*x3)  - (x1*y3 - y1*x3) + (x1*y2 -  x2*y2);
         if(ans==0)  cout<<"colliner";
      else cout<<"Not colliner";
     
}
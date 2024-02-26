#include<iostream>
using namespace std;
int main () {
     int x;
     cout<<"Enter x coordinate :";
     cin>>x;
     int y;
     cout<<"Enter y coordinate :";
     cin>>y;

     if(x==0 && y==0) cout<<"Origin";
     else if(x==0)  cout<<"y-Axis";
     else if(y==0)  cout<<"x-Axis";
     else if(x>0 && y>0)  cout<<"1st Quadrant";
     else if(x<0 && y>0)  cout<<"2st Quadrant";
     else if(x<0 && y<0)  cout<<"3st Quadrant";
     else cout<<"4th Quadrant";

}
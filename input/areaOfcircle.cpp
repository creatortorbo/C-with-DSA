#include<iostream>
using namespace std;
int main (){  // here we find the radius the user input 
    float radius;
    cout<<"Enter radius  :";
    cin>>radius;
    float pi = 3.14;
    float area = pi * radius * radius;
    cout<<"The area of the circle  :",area;
}
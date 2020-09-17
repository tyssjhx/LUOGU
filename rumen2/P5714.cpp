#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    double h;
    int w;
    cin>>w>>h;
    double BMI = w/(h*h);
    if(BMI<18.5)
        cout<<"Underweight";
    else if(BMI<24)
        cout<<"Normal";
    else
        cout<<"Overweight"<<endl<<BMI;
    return 0;
}
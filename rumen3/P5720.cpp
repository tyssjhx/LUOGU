#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int len;
    int day = 0;
    cin>>len;

    while(len!=1){
        len = len>>1;
        day++;
    }
    cout<<day+1;
    return 0;
}
#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1,h2,m1,m2;
    cin>>h1>>m1>>h2>>m2;
    int h3,m3;
    h3 = h2-h1-((m2-m1)<0? 1:0);
    m3 = (m2-m1)<0? 60+m2-m1:m2-m1;
    cout<<h3<<" "<<m3;
    return 0;
}
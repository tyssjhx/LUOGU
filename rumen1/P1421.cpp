#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    float money = a+b*0.1;
    cout<<int(money/1.9);
    return 0;
}
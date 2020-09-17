#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    bool property1 = (a%2)==0;
    bool property2 = (a>4 && a<=12);
    printf("%d %d %d %d",property1&property2,property1|property2,property1^property2,(!property1)&(!property2));

    return 0;
}
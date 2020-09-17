#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int main(){
    float cola,cola_per_person;
    int people,cups;
    cin>>cola>>people;
    cola_per_person = cola/people;
    cups = people*2;
    printf("%.3f\n%d",cola_per_person,cups);
    //cout<<setprecision(3)<<cola_per_person<<"\n"<<cups;
    return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int q_num;
    cin >>q_num;
    const float pi = 3.141593;
    switch(q_num){
        case 1:
            cout << "I love Luogu!"; 
            break;
        case 2:
            cout <<"6 4";
            break;
        case 3:
            cout <<"3\n12\n2"; 
            break;
        case 4: 
            cout <<"166.667";
            break;
        case 5: 
            cout <<"15";
            break;
        case 6:
            cout <<sqrt(6*6+9*9); 
            break;
        case 7: 
            cout <<"110\n90\n0";
            break;
        case 8: 
            
            cout <<10*pi<<endl<<25*pi<<endl<<4.0/3*pi*125;
            break;
        case 9: 
            cout<<"22";
            break;
        case 10: 
            cout<<"9";
            break;
        case 11: 
            cout<<100.0/3;
            break;
        case 12: 
            cout<<"13\nR";
            break;
        case 13: 
            cout<<(int)(pow(4/3*pi*(4*4*4+10*10*10),1.0*1/3));
            break;
        case 14: 
            cout<<"50";
            break;
   
    }
    
    return 0;
}
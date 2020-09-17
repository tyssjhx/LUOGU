#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main(){
    string a;
    cin >> a;
    int len = a.size();
    for(len = len-1; len >= 0; len--){
        cout<<a[len];
    }
    return 0;
}
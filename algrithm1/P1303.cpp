#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

class BigNumber{
    private:
      string number;
    public:
      BigNumber(){
        ;
      }
      BigNumber(string number){
        this->number = number;
      }
      void setNumber(string number){
        this->number = number;
      }
      string getNumber(){
        return this->number;
      }
      /*
      string add(string number){
        string a = number;
        string b = this->number;
        int a_length = a.length();
        int b_length = b.length();
        int c = max(a_length,b_length);
        char result[c+2] = {'\0'};
        int cin = 0;
        int i,j,k;
        for(i = a_length-1,j = b_length-1,k = c; i>=0 && j>=0; i--,j--,k--){
          int cout = cin + a[i]-'0' + b[j]-'0';
          if(cout >= 10){
            cin = 1;
            result[k] = cout-10+'0';
          }else{
            cin = 0;
            result[k] = cout+'0';
          }
        }
        if(i<0 && j<0){
          ;
        }else if(i<0){
          for(;j>=0;j--,k--){
            int cout = cin + b[j]-'0';
            if(cout >= 10){
              cin = 1;
              result[k] = cout-10+'0';
            }else{
              cin = 0;
              result[k] = cout+'0';
            }
          }
        }else if(j<0){
          for(;i>=0;i--,k--){
            int cout = cin + a[i]-'0';
            if(cout >= 10){
              cin = 1;
              result[k] = cout-10+'0';
            }else{
              cin = 0;
              result[k] = cout+'0';
            }
          }
        }
        result[k] = cin + '0';
        return (string)(result[0]=='0'? result+1:result);
      }
      */
     
      string add(string number){
        string str1 = number;
        string str2 = this->number;
        string str;
        int len1=str1.length();
        int len2=str2.length();
        if(len1<len2)
        {
            for(int i=1;i<=len2-len1;i++)
              str1="0"+str1;
        }
        else
        {
            for(int i=1;i<=len1-len2;i++)
              str2="0"+str2;
        }
        len1=str1.length();
        int cf=0;
        int temp;
        for(int i=len1-1;i>=0;i--){
            temp=str1[i]-'0'+str2[i]-'0'+cf;
            cf=temp/10;
            temp%=10;
            str=char(temp+'0')+str;
        }
        if(cf!=0)  
          str=char(cf+'0')+str;
        this->number = str;
        return str;
      }
      string add(class BigNumber* number){
        string a = number->number;

        return this->add(a);
      }
      string mul(string number){
        string str1 = number;
        string str2 = this->number;
        string str;

      }
      string mul(class BigNumber* number){
        string b = number->number;

        return this->mul(b);
      }

};

int main(){

    string str1,str2;
    cin>>str1>>str2;
    BigNumber A(str1);
    BigNumber B(str2);
    cout<<A.add(&B)<<endl;
    
}
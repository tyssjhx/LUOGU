#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

class Students{
    private: 
        int student_number;
        int score1;
        int score2;
    public:
        float totalScore(){
            return score1*0.7 + score2*0.3;
        }
        string isEccellent(){
            float total_score = totalScore();
            if(total_score>=80 && (score1+score2)>140)
                return "Excellent";
            else
                return "Not excellent";
        }
        void setStudentNumber(int st){
            student_number = st;
        }
        void setScore1(int s1){
            score1 = s1;
        }
        void setScore2(int s2){
            score2 = s2;
        }
};

int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int st,s1,s2;
        cin>>st>>s1>>s2;
        Students A;
        A.setStudentNumber(st);
        A.setScore1(s1);
        A.setScore2(s2);
        
        cout<<A.isEccellent();
        if(i!=n-1)
            cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int SecretNum = 7;
    int guess;
    int chance = 0;
    do{cout<<"Enter Guess: ";
       cin>>guess;
       chance++;}
        while (SecretNum != guess  && chance<3);
        if (guess==SecretNum){
            cout<<"Correct";} else
    {cout<<"Try Again";}
    return 0;}

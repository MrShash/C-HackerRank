#include <iostream>
using namespace std;

int main()
{
    bool isTall = false;
    bool isMale = true;

    if (isMale && isTall)
        cout<<"You are a tall male";

    else if (!isMale && isTall)
        cout<<"You are tall but not male";
    else if (isMale && !isTall)
        cout<<"You are male but not tall";
    else
        cout<<"You are neither tall nor male";
    return 0;
}

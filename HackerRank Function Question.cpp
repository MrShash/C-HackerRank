#include <iostream>
using namespace std;

int getmax(int a, int b, int c, int d){
    int max;
    if (a>b && a>c)
        if (a>d)max=a;
        else max=d;
    else if (b>a && b>c)
        if (b>d) max=b;
        else max=d;
    else if (c>a && c>b)
        if (c>d) max=c;
        else max=d;
    else {cout<<"Invalid Input";}
return max;
}
int main (){
int a,b,c,d;
cin>>a>>b>>c>>d;
cout<<getmax(a,b,c,d);
}




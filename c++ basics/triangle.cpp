#include <iostream>
using namespace std;
int main(){

    int a;
    int b;
    int c;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter third number";
    cin>>c;
    if (a+b>c && a+c>b && b+c>a){
        cout<<"the numbers can form a triangle"<<endl;

    }

    else{
        cout<<"the numbers cannot form a triangle";
    }

    }



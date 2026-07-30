#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter the first number:\n";
    cin>>a;
    cout<<"enter the second number:\n";
    cin>>b;
    cout<<"enter the third number:\n";
    cin>>c;
    if(a>b and a>c){
        cout<<"The largest number is:"<<a<<endl;
    }

    else if(b>a and b>c){
        cout<<"The largest number is:"<<b<<endl;
    }

    else{
        cout<<"The largest number is:"<<c<<endl;
    }
}
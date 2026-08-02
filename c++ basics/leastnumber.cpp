#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    cout<<"enter first number:";
    cin>>x;
    cout<<"enter second number:";
    cin>>y;
    cout<<"enter third number:";
    cin>>z;
    if(x<y and x<z){
        cout<<"the least number is:"<<x;
    }

    else if(y<z and y<x){
        cout<<"the least number is:"<<y;

    }

    else{
        cout<<"the least number is:"<<z;
    }
}

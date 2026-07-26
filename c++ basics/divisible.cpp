#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    if (a%5 == 0 and a%3 == 0){
        cout<<"the number is divisible by 3 and 5"<<endl;

    }
    else if(a%5 == 0 and a%3!=0){
        cout<<"the number is divisible by 5 but not 3"<<endl;

    }

    else if(a%3 == 0 and a%5!=0){
        cout<<"the number is divisble by 3 not 5"<<endl;


    }

    else{
        cout<<"the number is not divisible by 3 or 5"<<endl;
    }
}
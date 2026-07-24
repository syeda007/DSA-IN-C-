#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    if(x>0){
        if(x%2==0){
            cout<<"postive even";
        }
        else{
            cout<<"postive odd";
        }
    }
        if (x<0){
            if(x%2!=0){
                cout<<"negative odd";
            }
            else{
                cout<<"negative even";
            }
        }
}
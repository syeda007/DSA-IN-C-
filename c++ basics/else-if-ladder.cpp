#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"good";
    }
    else if(marks>=80){
        cout<<"average";
    }
    else if(marks>=70){
        cout<<"can do better";
    }
    else{
        cout<<"fail";
    }

}
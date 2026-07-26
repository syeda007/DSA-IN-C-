#include <iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"enter length:";
    cin>>l;
    cout<<"enter breadth:";
    cin>>b;
    int perimeter = 2*(l+b);
    cout<<"perimeter is:"<<perimeter;
    int area = l*b;
    cout<<"\narea is:"<<area<<endl;
    
    if(perimeter>area){
        cout<<"perimeter is greater than area"<<endl;
    }

    else if(perimeter < area){
        cout<<"area is greater than perimeter"<<endl;
    }

    else{
        cout<<"the area and the perimeter are the same"<<endl;
    }
}
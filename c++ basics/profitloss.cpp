#include <iostream>
using namespace std;
int main(){
    int costprice;
    int sellingprice;
    cout<<"enter cost price:";
    cin >> costprice;
    cout<<"enter selling price:";
    cin >> sellingprice;
    int a = costprice - sellingprice;
    int b = sellingprice - costprice;
    if(costprice>sellingprice) {
        cout<<"loss is:"<< a;
    }

    else if(sellingprice>costprice)
    {
        cout<<"profit is:"<< b;
    }

    else {
        cout<<"neither profit nor loss";
    }

}
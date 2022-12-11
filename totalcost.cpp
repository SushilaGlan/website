#include<iostream>
using namespace std;
class product{
    public:
    double quantity, total, discount;
    double perunit = 100;
    void getQuantity(){
        cout<<"Enter the quantity of product you want to buy:";
        cin>>quantity;
    }
    void calcTotal(){
        total = quantity*perunit;
        if (total<=1000){
            cout<<"Total cost = Rs."<<total;
        }else if (total>1000){
            discount = 0.1*total;
            cout<<"Total cost = Rs."<<total-discount;   
        }else {
            cout<<"Invalid Input !";
        }
    }
};
int main(){
    product pd;
    pd.getQuantity();
    pd. calcTotal();
    return 0;
}
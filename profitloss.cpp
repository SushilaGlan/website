#include<iostream>
using namespace std;
class profitloss{
    public:
    double profit, loss;
    double sellingprice,
    buyingPrice;
    void getprices(){
        cout<<"enter the buyingPrice:";
        cin>>buyingPrice;
        cout<<"enter the sellingprice:";
        cin>>sellingprice;
    }
    void findprofitloss(){
        if (buyingPrice > sellingprice){
            loss = buyingPrice - sellingprice;
            cout<<"total loss = rs."<<loss;
        } else if(buyingPrice < sellingprice){
            profit = sellingprice - buyingPrice;
            cout<<"total profit = rs."<<profit;
        }else{
            cout<<"neither profit nor loss";
        }
    }
};
int main(){
    profitloss pl;
    pl. getprices();
    pl. findprofitloss();
    return 0;
}
#include<iostream>
    using namespace std;
    class division {
        public:
            int num;
    void getInput(){
        cout<<"Enter any number:";
        cin>>num;
    }
    void checkCondition(){
        if(num % 5 == 0 && num % 11 == 0){
            cout<<num<<" is divisible by 5 and 11 !"; 
        }else{
            cout<<num<<" is not divisible by 5 and 11 !";
        }
    }
};
int main(){
    division n1;
    n1. getInput();
    n1. checkCondition();
    return 0;
}
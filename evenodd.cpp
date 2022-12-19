 #include<iostream>
    using namespace std;
    class evenodd {
        public:
            int num;
    void getInput(){
        cout<<"Enter any number:";
        cin>>num;
    }
    void findEvenOdd(){
        if(num == 0){
            cout<<"zero";
        }else if (num % 2 == 0){
            cout<<num<<" is even number !";   
        }else{
            cout<<num<<" is odd number !";
        }
    }
};
int main(){
    evenodd eo;
    eo. getInput();
    eo. findEvenOdd();
    return 0;
}
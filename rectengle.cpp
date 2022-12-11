#include<iostream>
using namespace std;
class rect{
    public:
    int length, breath;
    void getData(){
        cout<<"Enter the length of the rectangle:";
        cin>>length;
        cout<<"Enter the breath of the rectangle:";
        cin>>breath;
    }
    void checkShape(){
        if(length == breath){
            cout<<"it is a square!";
        }else{
            cout<<"it is a rectangle!";   
        }
    }
};
int main(){
    rect rt;
    rt. getData();
    rt. checkShape();
    return 0;
}
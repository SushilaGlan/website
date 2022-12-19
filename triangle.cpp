#include<iostream>
using namespace std;
class triangle{
    public:
    double sideOne, sideTwo, sideThree;
    void getSides(){
        cout<<"Enter the side one:";
        cin>>sideOne;
        cout<<"Enter the side two:";
        cin>>sideTwo;
        cout<<"Enter the side three:";
        cin>>sideThree;
    }
    void checkTriangle(){
        if(sideOne==sideTwo && sideTwo==sideThree && sideThree==sideOne){
            cout<<"Equilateral Triangle";
        }else if(sideOne==sideTwo||sideTwo==sideThree||sideThree==sideOne) {
            cout<<"Isosceles Triangle";   
        }else{
            cout<<"Scalene Triangle";
        }
    }
};
int main(){
    triangle tg;
    tg. getSides();
    tg. checkTriangle();
    return 0;
}
    void getData(){
        cout<<"Enter your salary:";
        cin>>salary;
        cout<<"Enter the year of service in this organization:";
        cin>>time;
    }
    void calcBonus(){
        if(time>5.0){
            bonus = 0.05*salary;
            cout<<"Bonus = "<<bonus;
        }else if (time<5.0){
            cout<<"bonus = 0";   
        }else{
            cout<<"Invalid Input!";
        }
    }
};
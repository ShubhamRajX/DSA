#include<iostream>
using namespace std;

/*
int main()
{
    int age;
    cout << "Enter your age: ";
    cin>>age;

    if(age<18){
        cout<< "You are not a adult."<<endl;
    }
    else if(age>=18 && age<60){
        cout<< "You are a adult."<<endl;
    }
    else{
        cout<< "You are a senior citizen."<<endl;
    }
    return 0;
}
*/

/*
int main(){
    int percentage;
    cout << "Enter your percentage: ";
    cin>>percentage;

    if(percentage < 25)
    {
        cout<< "You are fail."<<endl;
    }
    if(percentage >= 25 && percentage < 45)
    {
        cout<< "E."<<endl;
    }
    if(percentage >= 45 && percentage < 60)
    {
        cout<< "D"<<endl;
    }
    if(percentage >= 60 && percentage < 75)
    {
        cout<< "C"<<endl;
    }
    if(percentage >= 75 && percentage < 90)
    {
        cout<< "B"<<endl;
    }
    if(percentage >= 90 && percentage <= 100)
    {
        cout<< "A"<<endl;
    }
    return 0;
}
*/

int main(){
    int percentage;
    cout << "Enter your percentage: ";
    cin>>percentage;

    if(percentage < 25)
    {
        cout<< "You are fail."<<endl;
    }
    else if(percentage <= 44)
    {
        cout<< "E."<<endl;
    }
    else if(percentage < 59)
    {
        cout<< "D"<<endl;
    }
    else if(percentage <= 74)
    {
        cout<< "C"<<endl;
    }
    else if(percentage <= 89)
    {
        cout<< "B"<<endl;
    }
    else if(percentage <= 100)
    {
        cout<< "A"<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";

    cin >> age;

    if(age < 18){
        cout<<"You are eligible for Job" <<endl;
    }
    else if(age >= 18 && age <= 50){
        cout<<"You are eligible for Job" <<endl;
    }
    else if(age > 50 && age <= 60){
        cout<<"You are eligible for Job" <<endl;
        if(age >= 55){
            cout<<"But your retirement is near"<<endl;
        }
    }
    else if(age > 60 && age <= 70){
        cout<<"Your retirement time" <<endl;
    }
    else{
        cout<<"Take Rest" <<endl;
    }
    return 0;
}
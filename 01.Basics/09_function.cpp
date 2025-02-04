#include<bits/stdc++.h>
using namespace std;

void printName1(){
    // cout<<"Hey, Shubham"<<endl;
}

void printName2(string name){
    cout<<"Hey, "<<name<<endl;
}

int main(){
    printName1();

    string name;
    cin>>name;
    printName2(name);

    string name2;
    cin >> name2;
    printName2(name2);
}
#include<iostream>
using namespace std;

int main(){

    // if else statement
    //! package
    /*
    int package ;
    cout<<"Enter the package: ";

    cin>>package;

    if(package > 10){
        cout << "Accepted"<<endl;
    }
    else{
        cout<<"Not Accepted"<<endl;
    }
    if(package > 10)
    cout << "Accepted"<<endl;
    else
    cout<<"Not Accepted"<<endl;
    */

    //! marks grading
    /*
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    if(marks >= 33)
    cout<< "Passed";
    else{
        cout<<"Failed";
    }
    */

    //! Compare two numbers
    /*
    int a, b;
    cin>>a>>b;

    if(a==b)
    cout<<"Equal";
    else if(a>b)
    cout<<"Greater";
    else
    cout<<"Smaller";
    return 0;
    */

    //! Even or Odd 
    /*  
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if(a%2 == 0)    cout<<"Even";
    else    cout<<"Odd";
    */

    //! +ve, -ve or 0
    /*
    int a;
    cin>> a;

    if(a == 0) cout<<"Zero";
    else if(a > 0) cout<<"Positive";
    else cout<<"Negative";
    */

    //! vowel or not
    
    char c;
    cin>>c;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }

    
    return 0;
}
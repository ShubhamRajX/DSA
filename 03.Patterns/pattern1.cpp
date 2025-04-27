#include<iostream>
using namespace std;

int main(){

    //! Rectangle pattern
    /*
    * * * * * 
    * * * * *
    * * * * *
    * * * * * 
    * * * * *
    */
    // int n, i, j;
    // cin>>n;

    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    10 10 10 10 10 
    10 10 10 10 10
    10 10 10 10 10
    10 10 10 10 10 
    10 10 10 10 10
    */
    // int n, i, j;
    // cin>>n;

    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n; j++){
    //         cout<<"10 ";
    //     }
    //     cout<<endl;
    // }

    /*
    1 1 1 1 1 
    2 2 2 2 2
    3 3 3 3 3 
    4 4 4 4 4
    5 5 5 5 5
    */
    // int n, i, j;
    // cin>>n;

    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5
    */
    // int n, i, j;
    // cin>>n;

    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    5 5 5 5 5 
    4 4 4 4 4
    3 3 3 3 3 
    2 2 2 2 2
    1 1 1 1 1
    */
    // int n, i, j;
    // cin>>n;

    // for(i=n; i>=1; i--){
    //     for(j=1; j<=n; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    5 4 3 2 1 
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1 
    5 4 3 2 1
    */
    // int n, i, j;
    // cin>>n;

    // for(i=n; i>=1; i--){
    //     for(j=n; j>=1; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    1 1 1 1 1 
    4 4 4 4 4
    9 9 9 9 9
    16 16 16 16 16
    25 25 25 25 25
    */
    // int n, i, j;
    // cin>>n;

    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n; j++){
    //         cout<<i*i<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    25 16 9 4 1 
    25 16 9 4 1
    25 16 9 4 1
    25 16 9 4 1
    25 16 9 4 1
    */
    // int n, i, j;
    // cin>>n;

    // for(i=n; i>=1; i--){
    //     for(j=n; j>=1; j--){
    //         cout<<j*j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    a b c d e 
    f g h i j
    k l m n o
    p q r s t 
    u v w x y
    */
    // int n, i, j;
    // cin>>n;
    // char name = 'a';

    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n; j++){
    //         cout<<name<<" ";
    //         name++;
    //     }
    //     cout<<endl;
    // }

    /*
    a a a a a 
    b b b b b
    c c c c c
    d d d d d
    e e e e e
    */
    // int n, i, j;
    // cin>>n;
    // char name = 'a';

    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n; j++){
    //         cout<<name<<" ";
    //     }
    //     name++;
    //     cout<<endl;
    // }
    // int n, i, j;
    // cin>>n;

    // for(i=1; i<=n; i++){
    //     char name = 'a' +(i-1);
    //     for(j=1; j<=n; j++){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    A B C D E 
    A B C D E
    A B C D E
    A B C D E 
    A B C D E
    */
    // for(int i=1; i<=5; i++){
    //     for(char c='A'; c<='E'; c++){
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    1 2 3 4 5 
    6 7 8 9 10
    11 12 13 14 15 
    16 17 18 19 20
    21 22 23 24 25
    */
    int n, i, j;
    cin>>n;

    int count = 1;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
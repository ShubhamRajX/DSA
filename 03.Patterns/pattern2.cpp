#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cin>>n;

    //! Right handed triangle star pattern
    /*
    * 
    * * 
    * * * 
    * * * * 
    * * * * *
    */
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //! Number pattern
    /*
    1 
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    1 
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    //! Reverse number pattern
    /*
    1 
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
    */
    // for(i=1; i<=n; i++){
    //     for(j=i; j>=1; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //! Alphabet pattern
    /*
    a 
    a b
    a b c
    a b c d 
    a b c d e
    */
    // for(i=1; i<=n; i++){
    //    char name = 'a';
    //    for(j=1; j<=i; j++){
    //     cout<<name<<" ";
    //     name++;
    //    }
    //     cout<<endl;
    // }

    /*
    a 
    b b
    c c c
    d d d d
    e e e e e
    */
    // char name = 'a';
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=i; j++){
    //      cout<<name<<" ";
    //     }
    //     name++;
    //     cout<<endl;
    //  }

    // for(i=1; i<=n; i++){
    //     char name = 'a'+i-1;
    //     for(j=1; j<=i; j++){
    //      cout<<name<<" ";
    //     }
    //     cout<<endl;
    //  }

    //! Inverted right triangle star pattern
    /*
    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
    */
    // for(i=n; i>=1; i--){
    //     for(j=i; j>=1; j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //! Reverse number pattern
    /*
    5 4 3 2 1 
    4 3 2 1
    3 2 1
    2 1
    1
    */
    // for(i=n; i>=1; i--){
    //     for(j=i; j>=1; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    1 2 3 4 5 
    1 2 3 4
    1 2 3
    1 2
    1
    */
    // for(i=n; i>=1; i--){
    //     for(j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    5 
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1
    */
    for(i=1; i<=n; i++){
        for(j=n; j>=5-(i-1); j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
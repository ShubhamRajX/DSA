#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //! Hollow Square Pattern
    /*
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
    */
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(i == 1 || i == n || j == 1 || j == n){
//                 cout << "* ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

    //! Pattern 1
    /*
            * 
          * * 
        * * * 
      * * * *
    * * * * *
    */
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //! Pattern 2
    /*
            1 
          2 2 
        3 3 3 
      4 4 4 4
    5 5 5 5 5
    */
    
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 3
    /*
            1 
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
    */
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 4
    /*
            A 
          B B
        C C C
      D D D D
    E E E E E
    */

    // char name = 'A';
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<name<<" ";
    //     }
    //     name++;
    //     cout<<endl;
    // }

    //! Pattern 5
    /*
            A 
          A B
        A B C
      A B C D
    A B C D E
    */
    
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     // for(int j=1; j<=i; j++){
    //     //     char name = 'A'+j-1;
    //     //     cout<<name<<" ";
    //     // }
    //     for(char name = 'A'; name <='A'+i-1; name++){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 6
    /*
            1 
          2 1 
        3 2 1 
      4 3 2 1 
    5 4 3 2 1
    */

    for(int row=1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<"  ";
        }
        for(int col=row; col>=1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;

    //! pattern 1
    /*
            * 
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    */
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(j=1; j<=2*i-1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 2
    /*
            1 
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
    */
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     for(j=i-1; j>=1; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 3
    /*
    * * * * * * * * * 
     * * * * * * *
       * * * * * 
         * * *
           *
    */
    // for(i=n; i>=1; i--){
    //     for(j=1; j<=n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(j=1; j<=2*i-1; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 4
    /*
    * * * * * * * * * * 
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
    */
    // for(i=n; i>=1; i--){
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     for(j=1; j<=2*(n-i); j++){
    //         cout<<"  ";
    //     }
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     for(j=1; j<=2*n-2*i; j++){
    //         cout<<"  ";
    //     }
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 5
    /*
    * 
    * * 
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * * 
    *
    */

    // for(i=1; i<=n; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(i=n-1; i>=1; i--){
    //     for(j=i; j>=1; j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 6
    /*
    *                 * 
    * *             * * 
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 * 
    */
    // for(i=1; i<=n; i++){
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     for(j=1; j<=2*n-2*i; j++){
    //         cout<<"  ";
    //     }
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(i=n-1; i>=1; i--){
    //     for(j=i; j>=1; j--){
    //         cout<<"* ";
    //     }
    //     for(j=1; j<=2*(n-i); j++){
    //         cout<<"  ";
    //     }
    //     for(j=i; j>=1; j--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //! Pattern 7
    /*
        * 
       * *
      * * *
     * * * *
    * * * * *
    * * * * * 
     * * * *
      * * *
       * *
        *
    */
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n; i>=1; i--){
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(j=i; j>=1; j--){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}
#include<iostream>
using namespace std;

int main(){

    //! 1 to 5
    // for(int i=1; i<=5; i++) cout<<i<<endl;

    //! 1 to n'
    // int n;
    // cin >> n;

    // for(int i=1;  i<=n; i++)    cout<<i<<endl;\

    //! print Shubham Raj n times
    // int n;
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     cout << "Shubham Raj" << endl;
    // }

    //! print n natural numbers
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++)  cout<<i<<endl;

    //! print n natural numbers in reverse order
    // int n;
    // cin>>n;
    
    // for (int i=n; i>=1; i--)    cout<<i<<endl;

    //! even number upto n
    // int n, i;
    // cin>> n;

    // for(i=1; i<=n; i++){
    //     if(i % 2 == 0){
    //         cout << i << endl;
    //     }
    // }

    //! odd number upto n
    // int n, i;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     if(i % 2 == 1)
    //     cout<<i<<endl;
    // }
        
    //! print a to z
    // for(char c= 'A'; c<= 'Z'; c++)  cout<<c<<endl;
    // for(char c= 'a'; c<= 'z'; c++)  cout<<c<<endl;

    //! 1 to 100 and gap = 3
    // for(int i=1; i<=100; i+=3) cout<<i<<endl;
    // for(int i=0; i<=100; i+=3) cout<<i<<endl;
    
    //! Table
    // int n, i;
    // cin>>n;

    // for(i=1; i<=10; i++)    cout<< n*i<<endl;
    // for(i=n; i<=10*n; i+=n)   cout<<i<<endl;

    //! calculate power 
    // int n, p;
    // cin >> n >>p;

    // int ans = n;

    // for(int i=1; i<p; i++){
    //     ans = ans*n;
    // }
    // cout<<ans;

    // int ans = 1;

    // for(int i=1; i<=p; i++){
    //     ans = ans*n;
    // }
    // cout<<ans;

    //! SUM OF N NATURAL NUMBERS
    // int n, sum =0;
    // cin>>n;

    // cout<< (n*(n+1))/2;

    // for(int i=1; i<=n; i++){
    //     sum = sum + i;
    // }
    // cout<<sum;

    //! sum of n square numbers
    // int n, i, sum = 0;
    // cin>>n;

    // for(i=1; i<=n; i++){
    //     int sqr = i*i;
    //     sum += sqr;
    // }
    // cout<<sum<<endl;

    // cout<< (n*(n+1)*(2*n+1))/6 << endl;

    //! Factorial of n
    // int n, i, fact=1;
    // cin>>n;

    // for(i=1; i<=n; i++){
    //     fact = fact * i;
    // }
    // cout<<fact;

    //! prime number
    // int n, i;
    // cin>>n;

    // if(n<2){
    //     cout<<"Not a prime";
    // }
    // else{
    //     for(i=2;i<n; i++){
    //         if(n%i==0){
    //             cout<< "Not a prime";
    //         }
    //     }
    //     cout<< "Prime";
    // }

    //! fibonacci series
    int n,i;
    cin>>n;

    int prev = 1, last = 0;
    int curr;

    if(n <= 1){
        cout<<n;
    }
    else{    
        for(i=2; i<=n; i++){
            curr = prev + last;
            last = prev;
            prev = curr;
        }
        cout<<curr;
    }


    

    return 0;
}
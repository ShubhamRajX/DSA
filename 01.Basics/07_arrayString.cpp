#include<bits/stdc++.h>
using namespace std;

int main(){
    // ARRAY
    // // 1D
    // int arr[5];
    // cin>>arr[2];
    // cout<<arr[2]<<endl;
    
    // // 2D
    // int arr[3][3];
    // cin>>arr[1][2];
    // cout<<arr[1][2]<<endl;

    // STRING
    string str;
    cin>>str;
    cout<<str[2]<<endl;
    cout<<str.size()<<endl;
    // cout<<str.length()<<endl;

    int len = str.size();
    cout<<str[len-2] <<endl;

    for(int i=0; i<len; i++){
        cout<<str[i]<<" ";
    }

    str[len-1] = 'o';
    cout<<str[len-1]<<endl;
}
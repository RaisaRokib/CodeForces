#include<bits/stdc++.h>
using namespace std;
int main()
{ long long n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>0){
        cout<<"1"<<" ";
    }
    else if(arr[i]==0){
          cout<<"0"<<" ";
    }
    else if (0>arr[i])
              cout<<"2"<<" ";
 }
}

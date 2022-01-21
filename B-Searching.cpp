#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,elem;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];


    }
    cin>>elem;
    long long c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==elem)
        {
            c++;
            cout<<i<<endl;
            break;
        }
    }
    if(c==0)
    {
        cout<<"-1"<<endl;
    }

}


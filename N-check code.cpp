#include<bits/stdc++.h>
using namespace std;
int main()
{int a,b;
cin>>a>>b;
string s;
cin>>s;
int c=0;
if(s[a]=='-'){
        //cout<<" HHH "<<endl;
    for(int i=0;i<s.size();i++){

        if(!isdigit(s[i]))//s[i]!='0' || s[i]!='1' || s[i]!='2' ||s[i]!='3' || s[i]!='4' || s[i]!='5' || s[i]!='6' ||s[i]!='7' || s[i]!='8' || s[i]!='9' )
                    {
                        c++;
                    }

    }
//cout<<c<<endl;
    if(c==1){
        cout<<"Yes"<<endl;
    }
    else   cout<<"No"<<endl;


}

else    cout<<"No"<<endl;


}

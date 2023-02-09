#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=(n+1)/2;
    int c2=(var-1);
    for(int i=1;i<=var;++i)
    {
        for(int j=1;j<=var;++j)
        {
            if(j==i){cout<<"*\t";}
            else{cout<<"\t";}
        }
        for(int j=var-1;j>=1;--j)
        {
            if(j==i){cout<<"*";}
            else{cout<<"\t";}  
        }
        cout<<endl;
    }
    for(int i=var-1;i>=1;--i)
    {
        for(int j=1;j<=var-1;++j)
        {
            if(j==i){cout<<"*\t";}
            else{cout<<"\t";}
        }
        for(int j=var-1;j>=1;--j)
        {
            if(j==i){cout<<"\t*";}
            else{cout<<"\t";}  
        }
        cout<<endl;
    }
}

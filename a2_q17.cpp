#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=(n+1)/2;
    for (int i=1;i<=var;++i)
    {
        for(int j=1;j<=var-1;++j)
        {
            if (i==var){cout<<"*\t";}
            else{cout<<"\t";}
        }
        for(int j=1;j<=i;++j)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }
    for (int i=var-1;i>=1;--i)
    {
        for(int j=1;j<=var-1;++j)
        {
            cout<<"\t";
        }
        for(int j=i;j>=1;--j)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }
}

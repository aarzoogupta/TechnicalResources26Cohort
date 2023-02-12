#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=(n+1)/2;
    for (int i=1;i<=var;++i)
    {
        for (int j=1;j<=n;++j)
        {
            if (i==1){cout<<"*\t";}
            else
            {
                if ((j==i) || (j==n-i+1)){cout<<"*\t";}
                else
                {
                    cout<<"\t";
                }
            }
        }
    cout<<endl;
    }
    for (int i=var-1;i>=1;--i)
    {
        for (int j=1;j<=n;++j)
        {
            if ((j>=i) && (j<=(n-i+1))){cout<<"*\t";}
            else
            {
                cout<<"\t";
            } 
        }
    cout<<endl;
    }
}

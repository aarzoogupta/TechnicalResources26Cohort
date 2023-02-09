#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=(n+1)/2;
    int c=0;
    int c2=var;
    for(int i=var;i>=1;--i)
    {
        ++c;
        for(int j=i;j>=1;--j)
        {
            cout<<"*\t";
        }
        for(int j=1;j<=2*c-1;++j)
        {
            cout<<"\t";
        }
        
        for(int j=i;j>=1;--j)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }
    for(int i=2;i<=var;++i)
    {
        --c2;
        for(int j=i;j>=1;--j)
        {
            cout<<"*\t";
        }
        for(int j=1;j<=2*c2-1;++j)
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

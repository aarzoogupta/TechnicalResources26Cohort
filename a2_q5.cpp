#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=(n+1)/2;
    for (int i=1;i<=(var);++i)
    {
        for (int j=1;j<=(var)-i;++j)
        {
            cout<<"\t";
        }
        for (int j=1;j<=(2*(i)-1);++j)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }

    for (int i=(var-1);i>=1;--i)
    {
        for (int j=1;j<=var-i;++j)
        {
            cout<<"\t";
        }
        for (int j=1;j<=(2*(i)-1);++j)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }

}

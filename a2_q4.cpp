#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;++i)
    {
        for (int j=n;j>=i;--j)
        {
            cout<<"*\t";
        }
        cout<<endl;
        for (int k=i;k>=1;--k){cout<<"\t";}
    }
}

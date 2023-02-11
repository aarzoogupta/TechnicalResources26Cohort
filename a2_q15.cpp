#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var= (n+1)/2;
    for (int i=1;i<=var;++i)
    {
        for (int j=var-1;j>=i;--j)
        {
            cout<<"\t";
        }
        int chk=0;
        for (int k=i;k<=n;++k)
        {
            cout<<k<<"\t";
            ++chk;
            if (chk==i){break;}
            else{continue;}
        }
        for (int k=2*i-2;k>=i;--k)
        {
            if (k==0){break;}
            else
            {cout<<k<<"\t";}
        }
        cout<<endl;
    }
    for (int i=var-1;i>=1;--i)
    {
        for (int j=var-i;j>=1;--j)
        {
            cout<<"\t";
        }
        int chk=0;
        for (int k=i;k<=n;++k)
        {
            cout<<k<<"\t";
            ++chk;
            if (chk==i){break;}
            else{continue;}
        }
        for (int k=2*i-2;k>=i;--k)
        {
            if (k==0){cout<<i<<"\t";}
            else
            {cout<<k<<"\t";}
        }
        cout<<endl;
    }
}

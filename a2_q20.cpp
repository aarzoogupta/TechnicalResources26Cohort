#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=(n+1)/2;
    int var2=n;
    for(int i=1;i<=n;++i)
    {
        for (int j=1;j<=n;++j)
        {
            if(i<var)
            {
                if(j==1 || j==n){cout<<"*\t";}
                else{cout<<"\t";}
            }
            if(i>=var)
            {
                if(j==1 || j==n){cout<<"*\t";}
                else if(j==i || j==var2){cout<<"*\t";}
                else{cout<<"\t";}
            }
        }
    --var2;
    cout<<endl;
    }
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=(n+1)/2;
    for (int i=1;i<=n;++i)
    {
        for (int j=1;j<=n;++j)
        {
            if(i==1)
            {
                if (j<=var || j==n){cout<<"*\t";}
                else{cout<<"\t";}
            }
            else if(i==var){cout<<"*\t";}
            else if(i<var)
            {
                if(j==var || j==n){cout<<"*\t";}
                else{cout<<"\t";}
            }
            else if(i>var && i!=n)
            {
                if(j==var || j==1){cout<<"*\t";}
                else{cout<<"\t";}
            }
            else
            {
                if (j>=var || j==1){cout<<"*\t";}
                else{cout<<"\t";}
            }
        }
    cout<<endl;
   }
   return 0;
}

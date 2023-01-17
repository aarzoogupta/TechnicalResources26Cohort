#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i;
    int n;
    for (i=1;i<=t;++i)
    {cin>>n;
    int j;
    int check=0;
    for (j= 1;j<=n;++j)
    {
        if ((j!=n) && (j!=1))
        {
            if (n%j!=0)
            {
                ++check;
            }
        }
    }
    if (check==(n-2))
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"not prime"<<endl;
    }
    }
}

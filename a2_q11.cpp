#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var=1;
    for (int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            cout<<var<<"\t";
            ++var;
        }
        cout<<endl;
    }
    return 0;
}

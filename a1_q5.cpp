#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    if (n==0)
    {
        return 1;
    }
    while (n>0)
    {
        n=n/10;
        ++c;
    }
    cout<<c;
}

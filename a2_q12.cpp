#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int var1=0;
    int var2=1;
    int var3=1;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            if(i==1 && j==1){cout<<var1;}
            else
            {cout<<var3<<"\t";
            var3=var1+var2;
            var1=var2;
            var2=var3;}
        }
        cout<<endl;
    }
    return 0;
}

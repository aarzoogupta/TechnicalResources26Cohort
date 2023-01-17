#include <iostream>
using namespace std;
int main()
{
    int low,high;
    cin >> low >> high;
    int i;
    for (i=low;i<=high;++i)
    {
        int j;
        int x=0;
        for (j=1;j<=i;++j)
        if ((j!=1) && (j!=i))
        {
            if (i%j!=0)
            {
                ++x;
            }
        
        }
        if (x==(i-2))
        {
            cout<<i<<endl;
        }
    }
}

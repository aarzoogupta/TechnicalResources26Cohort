#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1;
    cin>>num2;
    
    //greatest common divisor
    int j=2,loop_t,gcd;
    while ((j<=num1) && (j<=num2))
    {
        if ((num1%j==0) && (num2%j==0)){gcd=j;loop_t=1;}
        ++j;
    }
    if (loop_t==1){cout<<gcd<<endl;}
    else if (loop_t!=1){cout<<"1"<<endl;}
    
    //lowest common multiple
    int n1,n2,i;//n1>n2
    bool a=(num1>num2);
    if (a==1){n1=num1;n2=num2;}
    else{n1=num2;n2=num1;}//giving separate variables to greater value and smaller value for code to work properly
    
    int k,m;
    for(i=1;i<=n1;++i)
    {
        for(k=1;k<=n2;++k)
        {
            if(n2*i==n1*k){cout<<n1*k<<endl;m=1;break;}
        }
        if (m==1){break;}  
    }
}

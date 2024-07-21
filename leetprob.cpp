#include<iostream>
#include<math.h>
using namespace std;
class abc
{
public:
    int a,i,bit=0,z,n=0,com,out=0,m;
    void input()
    {
        cin>>a;
    }
    void cal()
    {
        while(a!=0)
        {
            z=a%2;
            a=a/2;
            if(z==1)
            {
                com=z&0;
            }
            else
            {
                com=z|1;
            }
            bit=bit+(pow(10,n)*com);
            n++;
        }
        cout<<bit<<"\n";
    }
    void output()
    {
        int n=0;
        while(bit!=0)
        {
            m=bit%10;
            bit=bit/10;
            out=out+(m*pow(2,n));
            n++;
        }
        cout<<out;
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
    o1.output();
}

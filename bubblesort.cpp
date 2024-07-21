#include<iostream>
using namespace std;
class abc
{
public:
    int a[10],i,j;
    void input()
    {
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    void cal()
    {
        for(j=4;j>0;j--)
        {
            for(i=0;i<j;i++)
            {
                if(a[i]>a[i+1])
                {
                    swap(a[i],a[i+1]);
                }
            }
        }
        for(i=0;i<5;i++)
        {
            cout<<a[i];
        }
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}

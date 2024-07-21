#include<iostream>
using namespace std;
class abc
{
public:
    int a[6],i=0,n=6;
    void input()
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
    }
    void cal()
    {
        if(n%2==0)
        {
            for(i=0; i<n; i+=2)
            {
                swap(a[i],a[i+1]);
            }
        }
        else
        {
            for(i=0; i<n-1; i+=2)
            {
                swap(a[i],a[i+1]);
            }
        }
    }
    void display()
    {
        for(i=0; i<n; i++)
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
    o1.display();
}

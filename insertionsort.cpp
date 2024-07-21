#include<iostream>
using namespace std;
class abc
{
public:
    int a[5],i,j,z;
    void input()
    {
        for(i=0; i<5; i++)
        {
            cin>>a[i];
        }
    }
    void cal()
    {
        for(i=1; i<5; i++)
        {
            z=i;
            j=i-1;
            while(j>=0)
            {
                if(a[z]<a[j])
                {
                    swap(a[z],a[j]);
                    z--;
                    j--;
                }
                else
                {
                    break;
                }
            }
        }
        for(i=0; i<5; i++)
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

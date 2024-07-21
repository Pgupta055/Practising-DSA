#include<iostream>
using namespace std;
class abc
{
public:
    int a[10],i,start=0,end,mid;
    void input()
    {
        for(i=0;i<4;i++)
        {
            cin>>a[i];
        }
        end=i-1;
    }
    void cal()
    {
        while(start<end)
        {
            if(a[mid]<a[mid+1])
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
            mid=(start+end)/2;
        }
        cout<<"peak value is:"<<a[end];
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}

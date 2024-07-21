#include<iostream>
using namespace std;
class abc
{
public:
    int a[10],start=0,mid,end,i;
    void input()
    {
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
        end=i-1;
    }
    void cal()
    {
        mid=(start+end)/2;
        while(start<end)
        {
            if(a[mid]<=a[0])
            {
                end=mid;
            }
            else
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        cout<<"pivot element is:"<<end;
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}

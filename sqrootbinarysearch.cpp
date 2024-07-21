#include<iostream>
using namespace std;
class abc
{
public:
    int a[101],start=0,i,end,num=36,mid;
    void input()
    {
        cout<<"enter no:";
        cin>>num;
        for(i=0;i<=num;i++)
        {
            a[i]=i+1;
        }
        end=i-1;
    }
    void cal()
    {
        mid=(start+end)/2;
        while(start<=end)
        {
            if((a[mid]*a[mid])>num)
            {
                end=mid-1;
            }
            else if((a[mid]*a[mid])<num)
            {
                start=mid+1;
            }
            else
            {
                cout<<a[mid];
                break;
            }
            mid=(start+end)/2;
        }
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}

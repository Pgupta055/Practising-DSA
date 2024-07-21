#include<iostream>
using namespace std;
class abc
{
public:
    int a[10],i,end,start=0,mid=0,key,ans1,ans2;
    void input()
    {
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
        end=i-1;
        cout<<"enter key:";
        cin>>key;
    }
    void firstoccurense()
    {
        mid=(start+end)/2;
        while(start<=end)
        {
            if(key==a[mid])
            {
                end=mid-1;
                ans1=mid;
            }
            else if(key<a[mid])
            {
                end=mid-1;
            }
            else if(key>a[mid])
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        cout<<"first occurence of" <<key<<"is"<<ans1<<"\n";
    }
    void lastoccurence()
    {
        start=0;
        end=i-1;
        mid=(start+end)/2;
        while(start<=end)
        {
            if(key==a[mid])
            {
                start=mid+1;
                ans2=mid;
            }
            else if(key<a[mid])
            {
                end=mid-1;
            }
            else if(key>a[mid])
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        cout<<"last occurence of" <<key<<"is"<<ans2;
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.firstoccurense();
    o1.lastoccurence();
}

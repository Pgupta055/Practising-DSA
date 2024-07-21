#include<iostream>
using namespace std;
class abc
{
public:
    int a[10],start=0,end,end2,mid,i,pivot,key=9;
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
        pivot=end;
        end=i-1;
        end2=pivot-1;
        start=0;
        if(key>=a[pivot] && key<=a[end])
        {
            while(pivot<=end)
            {
                mid=(pivot+end)/2;
                if(key<a[mid])
                {
                    end=mid-1;
                }
                else if(key>a[mid])
                {
                    pivot=mid+1;
                }
                else if(key==a[mid])
                {
                    cout<<"yes it is present";
                    break;
                }
            }
        }
        else if(key>=a[start] && key<=a[end2])
        {
            while(start<=end2)
            {
                mid=(start+end2)/2;
                if(key<a[mid])
                {
                    end2=mid-1;
                }
                else if(key>a[mid])
                {
                    start=mid+1;
                }
                else if(key==a[mid])
                {
                    cout<<"yes it is present";
                    break;
                }
            }
        }
        else
        {
            cout<<"element not found";
        }
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}

#include<iostream>
#include<algorithm>
using namespace std;
class abc
{
public:
    int a[10],i=0,j,minindex;
    void input()
    {
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    void cal()
    {
        i=0;
       while(i<4)
       {
           minindex=i;
           j=i+1;
           while(j<5)
           {
               if(a[minindex]>a[j])
               {
                   minindex=j;
               }
               j++;
           }
           swap(a[minindex],a[i]);
           i++;
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

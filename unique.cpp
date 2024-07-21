#include<iostream>
using namespace std;
class abc
{
public:
    int a[7],i,flag=0,j=0;
    void input()
    {
        for(i=0; i<7; i++)
        {
            cin>>a[i];
        }
    }
    void cal()
    {
        for(j=0; j<7; j++)
        {
            flag=0;
            for(i=0; i<7; i++)
            {
                if(a[j]==a[i])
                {
                    flag++;
                }
            }
            if(flag==1)
            {
                cout<<a[j];
                break;
            }
        }
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}

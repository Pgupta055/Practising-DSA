#include<iostream>
using namespace std;
class abc
{
public:
    int a=0,i=1,j=2,z;
    int cal(int f)
    {
        while(j<10)
        {
            z=i;
            i=i+a;
            a=z;
            if(f==j)
            {
                return i;
            }
            j++;
        }
    }
};
int main()
{
    abc o1;
    int c=o1.cal(6);
    cout<<c;
}

#include<iostream>
using namespace std;
class abc
{
public:
    int res1=1,res2=1,z,res3=1;
    float ans;
    int cal(int n, int r)
    {
        z=n-r;
        while(z>0)
        {
            res3=res3*(z);
            z--;
        }
        while(n>0)
        {
            res1=res1*(n);
            n--;
        }
        while(r>0)
        {
            res2=res2*(r);
            r--;
        }
        ans=(res1/(res2*res3));
        return ans;
    }
};
int main()
{
    abc o1;
    float c=o1.cal(6,2);
    cout<<c;
}

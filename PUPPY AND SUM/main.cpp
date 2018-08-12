#include <iostream>

using namespace std;

int sum(int x)
{
int s=0;
for(int i=1;i<=x;i++)
s=s+i;
return s;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,n,r;
        cin>>d>>n;
        if(d==1)
        r=sum(n);
        else if(d==2)
        r=sum(sum(n));
        else if(d==3)
        r=sum(sum(sum(n)));
        else if(d==4)
        r=sum(sum(sum(sum(n))));
        cout<<r<<endl;
    }
    return 0;
}

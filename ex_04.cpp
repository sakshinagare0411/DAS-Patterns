/*
1
22
333
4444
55555

*/
#include<iostream>
using namespace std;

void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;

    print(n);
    return 0;
}
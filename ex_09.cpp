/* 


    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/
#include<iostream>
using namespace std;

void print1(int n)
{
    for(int i=0;i<=n;i++)
    {
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        //start
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }

        //space
         for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void print(int n)
{
    for(int i=0;i<=n;i++)
    {
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        //start
        for(int j=0;j<2*n-(2*i-1);j++)
        {
            cout<<"*";
        }

        //space
         for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    print1(n);
    print(n);
    return 0;
}
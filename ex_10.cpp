/*

*
**
***
****
*****
****
***
**
*

*/

#include<iostream>
using namespace std;
void print(int n)
{
        for(int i =1;i<=2*n-1;i++)
        {
            int stras = i;
            if(i>n) stras = 2*n-i;
            for(int j=1;j<=stras;j++)
            {
                cout<<"*";
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
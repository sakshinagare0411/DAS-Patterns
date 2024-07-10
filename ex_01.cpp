/*
****
****
****
****

1)inner loop for columns
outer loop for rows

2)for inner loop focus on colums and connect them somehow to the rows

3)print them '*' inside the inner loop 

observe symmetry(optional)

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }

    return 0;
}
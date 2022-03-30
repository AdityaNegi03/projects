#include <bits/stdc++.h>

using namespace std;


int main()
{
    int test;
    cin>>test;
    int n;
    while(test)
    {

        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
      sort(arr,arr+n);


        int flag=0;

        for(int i=0;i<n;i++)
        {

            if(arr[i]==arr[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Yes";
        else
            cout<<"No";


        test--;
    }
    return 0;
}


#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    int i,min_idx,j,t;
    for(i=0;i<n-1;i++)
    {
        min_idx=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
                min_idx=j;
        }

        t=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=t;
    }


}
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
    int c=(n*n-n)/2;
    int s=n-1;
  cout<<endl;

       selectionSort(arr, n);
cout<<c<<" "<<s<<""<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        test--;
    }
    return 0;
}

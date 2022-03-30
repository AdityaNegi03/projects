#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i,key,j;
    int c=0;
    int s=0;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;

        while((j>=0)&&(arr[j]>key))
        {

            s++;
            arr[j+1]=arr[j];
            j--;
            c++;
        }

        arr[j+1]=key;
        s++;
    }

    cout<<c<<" "<<s<<endl;

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

  cout<<endl;

       insertionSort(arr, n);


        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        test--;
    }
    return 0;
}

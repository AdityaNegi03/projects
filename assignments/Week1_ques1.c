#include <stdio.h>

int main()
{
    int test=0;
    printf("Enter the number of test cases\n ");
    scanf("%d",&test);
    int n;
    int key;
    int flag=0;
    while(test)
    {
        flag=0;
      printf("Enter the number of elements\n ");
      scanf("%d",&n);
      int arr[n];
      printf("Enter the array elements\n ");
      for(int i=0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }

     printf("Enter the key\n ");
      scanf("%d",&key);

      for(int i=0;i<n;i++)
      {
          if(arr[i]==key)
          {
              flag=1;
              printf("Key found\n");
              break;
          }
      }
      if(flag==0)
      {
           printf("Key not found\n");
      }

        test--;
    }
}

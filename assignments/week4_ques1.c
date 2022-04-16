#include <stdio.h>  
     int comp=0;
 
    void merge(int a[], int beg, int mid, int end)    
    {    
        int i, j, k;  
        int n1 = mid - beg + 1;    
        int n2 = end - mid;    
          
        int LeftArray[n1], RightArray[n2]; //temporary arrays  
          
        /* copy data to temp arrays */  
        for (int i = 0; i < n1; i++)    
        LeftArray[i] = a[beg + i];    
        for (int j = 0; j < n2; j++)    
        RightArray[j] = a[mid + 1 + j];    
          
        i = 0; /* initial index of first sub-array */  
        j = 0; /* initial index of second sub-array */   
        k = beg;  /* initial index of merged sub-array */  
        
        while (i < n1 && j < n2)    
        {    
            if(LeftArray[i] <= RightArray[j])    
            {    
                a[k] = LeftArray[i];    
                i++;    
            }    
            else    
            {    
                a[k] = RightArray[j];    
                j++;    
            }    
            k++;   comp++; 
        }
        
        while (i<n1)    
        {    
            a[k] = LeftArray[i];    
            i++;    
            k++;    
        }    
          
       while (j<n2)    
        {    
            a[k] = RightArray[j];    
            j++;    
            k++;    
        }   
        
    }    
      
    void mergeSort(int a[], int beg, int end)  
    {  
        if (beg < end)   
        {  
            int mid = (beg + end) / 2;  
            mergeSort(a, beg, mid);  
            mergeSort(a, mid + 1, end);  
            merge(a, beg, mid, end);  
        }  
    }  
      
    /* Function to print the array */  
    void printArray(int a[], int n)  
    {  
        int i;  
        for (i = 0; i < n; i++)  
            printf("%d ", a[i]);  
        printf("\n");  
    }  
      
    int main()  
    { 
        int test=0;
        scanf("%d",&test);
        while(test){
           int n=0;
           comp=0;
        scanf("%d",&n); 
        int arr[n]; 
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
 

        mergeSort(arr, 0, n - 1);  
        printf("After sorting array elements are - \n");  
        printArray(arr, n);
        printf("\n%d\n",comp);
        test--;
        }
        return 0;  
    }  

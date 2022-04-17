

#include <iostream>
using namespace std;
int comp=0;
int s=0;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}


int partition(int array[], int low, int high) {
    

  int pivot = array[high];
  

  int i = (low - 1);

  for (int j = low; j < high; j++) {
      comp++;
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
      s++;
    }
  }
  

  swap(&array[i + 1], &array[high]);
  s++;
  
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
      
    int pi = partition(array, low, high);

    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}


int main() {
  int test=0;
  cin>>test;
  
  while(test--)
  {
  int n;
  cin>>n;
  int data[n];
  for(int i=0;i<n;i++)
  {
      cin>>data[i];
  }
  comp=0;s=0;
  quickSort(data, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
  cout<<endl;
  cout<<comp<<endl;
   cout<<s;
  test--;
  }
}

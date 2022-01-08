 #include <iostream>  
using namespace std;   
void merge(int a[], int beg, int mid, int end) {    
    int i, j, k;  
    int n1 = mid - beg + 1;       int n2 = end - mid;          
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];        
    i = 0; 
    j = 0; 
    k = beg;      
    while (i < n1 && j < n2){    
        if(LeftArray[i] <= RightArray[j]){    
            a[k] = LeftArray[i];    
            i++;           }    
        else{    
            a[k] = RightArray[j];    
            j++;            }            k++;        }    
    while (i<n1) {    
        a[k] = LeftArray[i];    
        i++;            k++;        }        
    while (j<n2)        {    
        a[k] = RightArray[j];    
        j++;            k++;       }    }    
  void mergeSort(int a[], int beg, int end)  {  
    if (beg < end)       {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);      }  }  
void printArray(int a[], int n)  {  
    int i;  
    for (i = 0; i < n; i++)       cout<<a[i]<<" ";  }  
  


int main()  {  
    int a[] = { 1, 30, 22, 81, 31, 58, 19, 59 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Unsorted - \n";  
    printArray(a, n);  
    mergeSort(a, 0, n - 1);  
    cout<<"\nSorted- \n";  
    printArray(a, n);  
    return 0;  
}  


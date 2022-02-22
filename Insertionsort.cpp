/* The task is to complete insert() which is used 
   as shown below to implement insertionSort() */


    /*void insert(int arr[], int i)
    {
        // Your code here 
        // No need to write anything here, just comment it .
    }*/
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int i,j,temp;
        for(i=1;i<n;i++)
        {
            temp=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>temp)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }

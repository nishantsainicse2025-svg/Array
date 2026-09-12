 #include <stdio.h>
 int partition(int arr[],int low,int high){
    int p=arr[high],j=low,i=low-1;
    for(int j=low;j<high;j++){
    if(arr[j]<=p){
        i++;
        //swap 
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;  
        
    }
}
    
        //puting pivot at right place(index)
        int temp=arr[i+1];
        arr[i+1]=arr[high];
        arr[high]=temp;
      
    return i+1;
 }
 void  quicksort(int arr[],int low,int high){
    if(low<high){
        int pividx=partition(arr,low,high);
        quicksort(arr,low,pividx-1);
        quicksort(arr,pividx+1,high);
    }
 }
 int main() {
    int arr[10]={1,354,56,3,23,25,6,2};
    int n=8;
    int low=0,high=n-1;
    quicksort(arr,low,high);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
 }
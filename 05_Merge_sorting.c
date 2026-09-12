 #include <stdio.h>
 void merge(int arr[],int low,int mid,int high){
    int i=low,j=mid+1,k=low,b[high+1];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++,k++;
        }else{
            b[k]=arr[j];
            j++,k++;
        }
    }
    while(i<=mid){
        b[k]=arr[i];
        i++,k++;
    }
    while(j<=high){
        b[k]=arr[j];
        j++,k++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=b[i]; //i think bug is here
    }
 }
 void mergesort(int arr[],int low,int high ){
        if(low<high){
           int mid=low+(high-low)/2;        
        mergesort(arr, low, mid);
        mergesort(arr,mid+1,high);
        merge(arr,low ,mid,high);
    }
}
 int main() {
    int arr[10]={2,45,6,8,1,34,88,9,11};
    int n=9;
    int low=0,high=n-1;
    mergesort(arr,low,high);
    printf("Sorted array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
 }
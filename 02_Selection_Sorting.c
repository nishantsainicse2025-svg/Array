 #include <stdio.h>
 
 int main() {
    int arr[100]={12,5,34,87,3465,23,1,90};
    int n=8;
    for(int i=0;i<n-1;i++){
        int smallindx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallindx]){
                smallindx=j;
            }
        }
      
        int temp=arr[i];
        arr[i]=arr[smallindx];
        arr[smallindx]=temp;
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
 }
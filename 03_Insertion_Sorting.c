#include <stdio.h>

int main() {
    int arr[10]={23,5,67,9,10,45,34,8,1};
    int n=9;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>temp){
            arr[prev+1]=arr[prev];
            prev--;
        }

        arr[prev+1]=temp;
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
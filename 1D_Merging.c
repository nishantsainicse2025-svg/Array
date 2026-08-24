// merging of 1 D array 
 #include <stdio.h>
 int merging(int arr1[],int arr2[],int n1,int n2,int arr3[]){
      for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
      }
      for(int i=0;i<n2;i++){
        arr3[n1+i]=arr2[i];
      }


    return n1+n2;
 }

 int main() {
    int arr1[100]={1,2,3,4,5,6};
    int arr2[100]={7,8,9,21};
    int arr3[100];
    int n1=6,n2=4;
   int n3= merging(arr1,arr2,n1,n2,arr3);
    for(int i=0;i<n3;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
 }
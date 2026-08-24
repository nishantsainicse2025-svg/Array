 #include <stdio.h>
 void Addition(int arr1[3][3],int arr2[3][3],int arr3[3][3],int row,int cols){
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
 }
 void Subtraction(int arr1[3][3],int arr2[3][3],int arr3[3][3],int row,int cols){
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            arr3[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
 }
 void Multiplication(int arr1[3][3],int arr2[3][3],int arr3[3][3],int row,int cols){
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            arr3[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
 }
 int main() {
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{7,5,8},{9,1,4},{3,2,6}},arr3[3][3];
    int row=3,cols=3;
    // Addition(arr1,arr2,arr3,row,cols);
    // Subtraction(arr1,arr2,arr3,row,cols);
    Multiplication(arr1,arr2,arr3,row,cols);
     for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
 }
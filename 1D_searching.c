//   linear searching
  
  #include <stdio.h>
    
    int linear(int arr[],int size,int target,int count){
        int found=0;
        for(int i=0;i<size;i++){
            count++;
            if (target==arr[i]){
            found=1;
               break;
             } 
        }
       
        if(found==1) {
            printf("%d found\nAt %dth position ",target,count);
            }
         
   else if(found==0) {
             printf("Target element not in array");
    }
}
    int another(int arr[],int target,int size){
        for(int i=0;i<size;i++){
            if (arr[i]==target){
                return i;
            }
        }
        return -1; // -1 daiga jab element nahi hoga array mai
    }

    int main() {
        int arr[100]={12,3,4,5,6,45};
        int size=6,target=5,count=0;

       linear(arr,size,target,count);
        // int searchindex=another(arr,target,size);
        // printf("Element %d found at index no %d ",target,searchindex);
     return 0;
    }
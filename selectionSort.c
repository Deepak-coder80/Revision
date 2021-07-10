//sorting --selection  sorting

#include <stdio.h>

int main(){
    //variable declartion
    int array[50];
    int size , i, j,temp,min_index;
    
    //get size 
    printf("Enter array size");
    scanf("%d",&size);
    
    //array elements
    printf("Enter array elements");
    for ( i = 0; i < size; i++) {
       scanf("%d",&array[i]);
    }
    
    //display array
    printf("elements in array Before sorting:");
    for ( i = 0; i < size; i++) {
       printf("\t %d",array[i]);
    }
    
    //sorting
   for ( i = 0; i < size-1; i++) {
      min_index = i;
      for(j=i+1;j<size;j++){
          if(array[j]<array[min_index]){
              min_index = j;
          }
          
          
          
      }
      //swap 
      if(min_index != i){
          temp = array[i];
          array[i]=array[min_index];
          array[min_index]=temp;
      }
      
   }
    
     //display array
    printf("\nelements in array After sorting:");
    for ( i = 0; i < size; i++) {
       printf("\t %d",array[i]);
    }
}
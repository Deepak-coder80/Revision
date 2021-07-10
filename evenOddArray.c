/******************************************************************************

odd and even array

*******************************************************************************/
#include <stdio.h>

int main()
{
   //array declartion
   int actualArray[50];
   int evenArray[50];
   int oddArray[50];
   
   //variable declartion 
   int size , i,evenCounter,oddCounter;
   
    
    //get size 
    printf("Enter array size");
    scanf("%d",&size);
    
    //array elements
    printf("Enter array elements");
    for ( i = 0; i < size; i++) {
       scanf("%d",&actualArray[i]);
    }
    
     //display actualArrayarray
    printf("elements in array Before sorting:");
    for ( i = 0; i < size; i++) {
       printf("\t %d",actualArray[i]);
    }
    
    evenCounter = 0;
    oddCounter = 0;
    
    for(i=0;i<size;i++){
        if(actualArray[i] %2 == 0){
            evenArray[evenCounter] = actualArray[i];
            evenCounter++;
        }else{
            oddArray[oddCounter] = actualArray[i];
            oddCounter++;
        }
    }
    
      //display evenArray
    printf("\n Even Array:");
    for ( i = 0; i < evenCounter; i++) {
       printf("\t %d",evenArray[i]);
    }
    
     //display oddArray
    printf("\n odd Array:");
    for ( i = 0; i < oddCounter; i++) {
       printf("\t %d",oddArray[i]);
    }
    
    return 0;
}

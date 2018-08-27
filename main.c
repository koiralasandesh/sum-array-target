#include <stdio.h>
#include <stdlib.h>

int main()
{
   int target,i,myArray[20],j,k,button;
   printf("Please enter the target integer:\n");
   scanf("%d",&target);
   for (i=0;i<20;i++){
   printf("Now, Please enter the integer %d:\n",i+1);
   scanf("%d",&myArray[i]);
   }
   for (j=0;j<20;j++){
    for (k=(j+1);k<20;k++){
        if(myArray[j]+myArray[k]==target){
            printf("%d + %d = %d\n",myArray[j],myArray[k],target);
            button=1;

        }
    }
   }
   if(button!=1){
    printf("No pair of integers in the given array can be summed to the target value.\n");
   }
}

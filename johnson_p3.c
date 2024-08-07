#include <stdio.h>
#include <stdbool.h>

void selectionSort(int intArray[],int n) {
   int indexMin,i,j;
   for(i = 0; i < n-1; i++) { 
      indexMin = i;
      for(j = i+1;j < n;j++) {
         if(intArray[j] < intArray[indexMin]) {
            indexMin = j;
         }
      }

      if(indexMin != i) {
         int temp = intArray[indexMin];
         intArray[indexMin] = intArray[i];
         intArray[i] = temp;
      }          
   }
}  
int main() {
	int n,i;
	printf("Enter the no.of Order priority numbers:");
	scanf("%d",&n);
	int intArray[n];
   printf("Enter the Order priority numbers: ");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&intArray[i]);
   }
   selectionSort(intArray,n);
   printf("After Sorting Orders Priority: ");
   for(i = 0;i < n;i++) {
      printf("%d ",intArray[i]);
}
}

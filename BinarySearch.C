#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main(){
int key, low, high, mid, n, i, A[100];
clrscr();
printf("Enter the size of array ;");
scanf("%d",&n);
printf("\nEnter the array elements :   \n");
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
  }
printf("\nEnter the key : ");
scanf("%d",&key);

low=1;
high=n;
while(low<=high){
  mid=(low+high)/2;
  if(A[mid]==key){
    printf("\nKey found at: %d ",mid);
    break;
    }
  else if(A[mid]<key){
    low=mid+1;
    }
  else{
    high=mid-1;
    }
  }

return 0;
}

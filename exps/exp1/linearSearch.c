#include "stdio.h"


int linearSearch(int arr[],int elem){
  for(int j=0;j<7;j++){
    if(arr[j] == elem){
      return j;
    }
  }
  return -1;
}

int main(){
  int arr[7];
  int elem;
  for(int i=0;i<7;i++){
    scanf("%d",&arr[i]);
  }
  scanf("%d",&elem);


  printf("%d",linearSearch(arr,elem));


}

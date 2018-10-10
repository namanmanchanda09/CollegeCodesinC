#include <stdio.h>

int binarySearch(int arr[] , int elem, int start, int end){
  if(start > end){
    return -1;
  }
  int mid = (start+end)/2;
  if(arr[mid] == elem){
    return mid;
  }
  else if (elem < arr[mid]) {
    return binarySearch(arr,elem,start,mid-1);
  }

  else{
    return binarySearch(arr,elem,mid+1,end);
  }



}

int main(){
  int arr[10];
  for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }
  int elem;
  scanf("%d",&elem);
  int size = sizeof(arr)/sizeof(arr[0]);
  int start = 0;
  int end = size - 1;
  printf("%d\n",binarySearch(arr,elem,start,end));
}

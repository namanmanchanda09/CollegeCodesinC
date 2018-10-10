#include <stdio.h>

int main(){
  int arr[3][3];
  int count = 0;

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&arr[i][j]);
      if(arr[i][j] == 0){
        count++;
      }
    }
  }

  if(count >= 5){
    printf("The matrix is a sparse matrix");
  }
  else{
    printf("The matrix is not sparse");
  }
  printf("\n");
}

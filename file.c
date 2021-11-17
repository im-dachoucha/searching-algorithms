#include <stdio.h>

int main(){
  int idx = -1, nbr, arr[] = {1, 2, 4, 7, 8, 9, 90, 123, 300}, size = sizeof(arr)/sizeof(arr[0]);
  printf("enter a number to look up in the array : ");
  scanf("%d", &nbr);
  for(int i = 0; i < size; i++){
    if(nbr == arr[i]) idx = i;
  }
  if(idx >= 0) printf("the number you entered (%d) exists at the index %d", nbr, idx);
  else printf("the number you entered doesn't exist");
}

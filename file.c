#include <stdio.h>
#include <math.h>

int main(){
  int idx = -1, nbr, arr[] = {1, 3, 5, 17, 20, 24, 29, 30}, size = sizeof(arr)/sizeof(arr[0]), step = sqrt(size);
  //printf("step %d\n", step);
  printf("enter a number to look up ");
  scanf("%d", &nbr);
  for(int i = 0; i < size; i += step){
    if(arr[i] == nbr) { idx = i; break;}
    else if(arr[i] < nbr || i + step >= size){
      for(int j = i + 1; j < size; j++){
        if(arr[j] == nbr) {
          idx = j;
          break;
        }
      }
    }
    else if(arr[i] < nbr){
      for(int j = i - 1; j < i - step - 1; j--){
        if(arr[j] == nbr) {
          idx = j;
          break;
        }
      }
      break;
    }
  }
  if(idx >= 0) printf("the number you entered (%d) exists at the index %d", nbr, idx);
  else printf("the number you entered doesn't eixst");
}

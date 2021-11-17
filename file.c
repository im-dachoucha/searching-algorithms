#include <stdio.h>

int main(){
 int arr[] = {1, 2, 5, 7, 9, 13, 24, 50, 120}, size = sizeof(arr)/sizeof(arr[0]); 
 int nbr, idx = -1, left = 0, right = size - 1, mid = (left+right)/2;
 printf("enter a number to look up ");
 scanf("%d", &nbr);
 while(idx == -1){
  if(nbr == arr[left]) {idx = left;break;}
  else if(nbr == arr[right]) {idx = right;break;}
  else if(nbr == arr[mid]) {idx = mid;break;}
  
  if(left == mid || right == mid) break;

  if(nbr > arr[mid]) {
    left = mid;
    mid = (left+right)/2;
  }
  else if(nbr < arr[mid]) {
    right = mid;
    mid = (left+right)/2;
  }
  //for debugging
  //printf("left -> %d\nmid -> %d\nright -> %d\n", left, mid, right);
 }
 if(idx >= 0) printf("the number you entered (%d) exists at the index %d", nbr, idx);
 else printf("the number you entered doesn't eixst");
}

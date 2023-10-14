#include <stdio.h>

int main(){
  char str[50]="tutorial", temp;
  int i, initial, end, len;

  //initial string
  printf(" Given String = %s \n", str);

  //inbuilt function to calculate the length of string
  len = strlen(str);
  initial = 0;
  end = len - 1;

  // for loop to swap characters
  for (i = initial; i < end; i++) {
    temp = str[i];
    str[i] = str[end];
    str[end] = temp;
    end--;
  }

  printf(" Reversed String = %s ", str);
  return 0;

}

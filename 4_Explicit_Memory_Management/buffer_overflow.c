#include <stdlib.h>
#include <stdio.h>

int main(void){ 
  int *a = (int*)malloc(10 * sizeof(int));
  int *b = (int*)malloc(sizeof(int));
  int c = 0;

  for(c = 0; c < 10; c++){
    a[c] = c;
  }

  *b = 1000;

  for(c = 0; c < 10; c++){
    printf("%d\n",a[c]);
  }

  free(a);
  free(b);

  return 0;
}

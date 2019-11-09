#include "random.h"

int main() {
  int ary[10];
  int i;
  for (i = 0; i < 10; i++){
    ary[i] = rand_num();
    printf("%d\n", rand_num());
  }
  return 0;
}

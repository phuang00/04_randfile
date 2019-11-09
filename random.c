#include "random.h"

int rand_num(){
  int fd = open("/dev/random", O_RDONLY);
  if (fd < 0){
    printf("%s\n", strerror(errno));
  }
  int *rand;
  read(fd, rand, 4);
  return *rand;
}

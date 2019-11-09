#include "random.h"

int rand_num(){
  int fd = open("/dev/random", O_RDWR);
  if (fd < 0){
    printf("%s\n", strerror(errno));
  }
  int rand;
  read(fd, &rand, 4);
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  close(fd);
  return rand;
}

#include "random.h"

int main() {
  printf("Generating random numbers:\n");
  int ary[10];
  int i;
  for (i = 0; i < 10; i++){
    ary[i] = rand_num();
    printf("\trandom %d: %d\n", i, ary[i]);
  }

  printf("\nWriting numbers to file...\n");
  umask(002);
  int fd = open("file", O_CREAT | O_WRONLY, 0644);
  if (fd < 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, ary, sizeof(ary));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  close(fd);

  printf("\nReading numbers to file...\n");
  fd = open("file", O_RDONLY);
  if (fd < 0){
    printf("%s\n", strerror(errno));
  }

  int ary2[10];
  read(fd, ary2, sizeof(ary2));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  close(fd);

  printf("\nVerification that written values were the same:\n");
  for (i = 0; i < 10; i++){
    printf("\trandom %d: %d\n", i, ary2[i]);
  }


  return 0;
}

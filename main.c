#include "random.h"

int main() {
  printf("Generating random numbers:\n");
  int ary[10];
  int i;
  for (i = 0; i < 10; i++){
    ary[i] = rand_num();
    printf("\trandom %d: %d\n", i, rand_num());
  }

  printf("\nWriting numbers to file...\n");
  int fd = open("file", O_CREAT | O_WRONLY, 0644);
  if (fd < 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[0], sizeof(ary[0]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[1], sizeof(ary[1]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[2], sizeof(ary[2]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[3], sizeof(ary[3]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[4], sizeof(ary[4]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[5], sizeof(ary[5]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[6], sizeof(ary[6]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[7], sizeof(ary[7]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[8], sizeof(ary[8]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  write(fd, &ary[9], sizeof(ary[9]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  close(fd);

  printf("\nReading numbers to file...\n");
  fd = open("file", O_RDONLY);
  if (fd < 0){
    printf("%s\n", strerror(errno));
  }
  int temp;
  read(fd, &temp, sizeof(ary[0]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[1]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[2]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[3]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[4]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[5]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[6]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[7]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[8]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  read(fd, &temp, sizeof(ary[9]));
  if (errno != 0){
    printf("%s\n", strerror(errno));
  }
  else{
    printf("\trandom %d: %d\n", i, temp);
  }
  close(fd);



  return 0;
}

// ex0.c - argc and argv

#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc != 2 || (argv[1][0] < '0' || argv[1][0] > '9')){
    fprintf(2, "Usage: %s <number>\n", argv[0]);
    if (argc > 1 && strcmp(argv[2], "-ok") == 0)
      goto loop;
    exit(1);
  }

loop:
  for (int i = 0; i < argc; i++)
    printf("argv[%d]: %s\n", i, argv[i]);

  exit(0);
}

/********************************************
* logo.c : A hack to dump pixels from a 24-bit
*          BMP file, in a format suited to be
*          included in a VHDL file
*
* Author : Mike Field <hamster@snap.net.nz>
*********************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  FILE *f;
  if(argc != 2) {
    fprintf(stderr,"Please give file name\r\n");
    return -1;
  }

  f = fopen(argv[1],"rb");
  if(f == NULL) {
    fprintf(stderr,"Unable to open file\r\n");
    return -1;
  }

  /* Skipping the BMP header */
  for(i = 0; i < 54; i++)
    getc(f);

  /* Dumping out the pixels */
  i = 0;
  while(1) {
    int c0,c1,c2;
    c0 = getc(f);
    c1 = getc(f);
    c2 = getc(f);
    /* End of file? */
    if(c0 < 0 || c1 < 0 || c2 < 0)
      break;

    /* Comma needed after last number? */
    if(i > 0) {
      putchar(',');
      /* NL+CR needed after last number? */
      if((i&7) == 0)
        printf("\r\n");
    }

    /* Output this number */
    printf("x\"%02x%02x%02x\"",c0,c1,c2);
    i++;
  }
  printf("\r\n");
  return 0;
}

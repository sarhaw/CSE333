//UW CSE333 Exercise 2

#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

void PrintBytes(void* mem_addr, int num_bytes);

//main is copied from the exercise spec
int main(int argc, char** argv) {
  float    float_val = 1.0f;
  char     char_val = '1';
  int32_t  int_val = 1;
  double   double_val  = 1.0;

  typedef struct {
    float    float_val;
    char     char_val;
    int32_t  int_val;
    double   double_val;
  } Ex2Struct;

  Ex2Struct struct_val = { float_val, char_val, int_val, double_val };

  PrintBytes(&float_val, sizeof(float));
  PrintBytes(&char_val, sizeof(char));
  PrintBytes(&int_val, sizeof(int32_t));
  PrintBytes(&double_val, sizeof(double));
  PrintBytes(&struct_val, sizeof(struct_val));

  return EXIT_SUCCESS;
}

void PrintBytes(void* mem_addr, int num_bytes) {
  // mem_addr is the address of the thing it's pointing at 
  printf("The %d bytes starting at 0x%p are: ", num_bytes, mem_addr);
  
  for (int i=0; i<num_bytes; i++) {

    //we cast void* mem_addr to a char* so we can get a return value
    //then we dereference using *
    char val = *(char*)(mem_addr+i); 

    //the if statement checks to see if there is a value 
    //in the first half of the byte, if not it prints 0
    if (! (val & 0xf0)){ 
      printf("0");
    }

    //prints only last two values of byte, otherwise it spams a bunch of fffs
    printf("%x ", val & 0xff);
  }
  printf("\n");
}

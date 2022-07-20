#include<stdio.h>
#include <netinet/in.h>
#include<stdint.h>
#include<stdlib.h>


uint32_t buf;
uint32_t RF(char * fileName) {
   FILE *PFile = fopen(fileName, "rb");
   fread(&buf, sizeof(uint32_t), 1, PFile);
   return  buf;
}


int main(int argc, char * argv[]) {

   if(argc <2) {
      printf("retry! argv[1] argv[2]");
      exit(0);
   }
   uint32_t n1 = RF(argv[1]);
   uint32_t n2 = RF(argv[2]);

   n1 = htonl(n1);
   n2 = htonl(n2);
   printf("0x%x + 0x%x = ", n1, n2);
   uint32_t total = n1 + n2;
   printf("0x%x\n", total);


}

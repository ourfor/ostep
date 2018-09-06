/*
 * author: ourfor date: 2018 09 06
 * Note: code that Loops and prints
 *       to understand the role of the OS a little bit better
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"

int main(int argc, char * argv[]){
    if(argc ！= 2){
      fprintf(stderr, "usage: cpu <string>\n");
      exit(1);
    }
    char *str = argv[1];
    while(1){
      Spin(1);
      printf("%s\n",str);
    }
    return 0;
    
}

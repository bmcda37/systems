#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct worker{
  char name[20];
}worker,*ptr_worker;


int main(){
  
  worker Ben = {sizeof(worker)};
  ptr_worker ptr = &Ben;

  strcpy(Ben.name, "Ben");
  printf("%s\n",Ben.name);
  
  strcpy(ptr->name,"John");
  printf("%s\n", ptr->name);

  return 0;
}

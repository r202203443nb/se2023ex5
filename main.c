#include <stdio.h>
#include <string.h>

int main(void){
char str[] = "hello world";
size_t length;
length = strlen(str);
printf("%s: %ld\n",str,length);

return 0;

}
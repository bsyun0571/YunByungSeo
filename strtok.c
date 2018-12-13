#include <stdio.h>
#include <string.h>

void Strtok(char *, int);

int main(){
  char str[1000];
  gets(str);
  int len = strlen(str);
  Strtok(str, len);
  return 0;
}

void Strtok(char * str, int len){
  int i;
	for(i = 0 ; i < len; i ++){
	    if(*str == ' '){
	      printf("\n");
	      str++;
	    }
	    else{
	      printf("%c", *str);
	      str++;
	    }
	}
}

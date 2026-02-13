//To take a input in long senctance 
#include <stdio.h>
int main(){
    char s[1000];

    // Read full line including spaces
    fgets(s, sizeof(s), stdin);

    printf("Hello, World!\n");
    printf("%s", s);

    return 0;
}
  

#include <stdio.h>

int main() {
    int i=0;
    for(int x=0; x<10;x++) {
        printf("Hello %d\n", x);
    }
    /*while (1) {
        if (i % 2) {
            i++;
            continue;
        }
        printf("Hello, World!\n",i);
        i++;
        if(i>=10){
            i++;
            break;
        }
    }*/
    return 0;
}

#include <stdio.h>

int main(void){
    int *p,q;
    int i = 100;
    q=199;

    p=&q;

    printf("%d",*p);

    return 0;
}

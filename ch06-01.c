#include <stdio.h>

int main(void){
    int *p,q;

    q=199;

    p=&q;

    printf("%d",*p);

    return 0;
}
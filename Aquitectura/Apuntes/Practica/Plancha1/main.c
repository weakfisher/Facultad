
#include <stdio.h>

int main(){
    unsigned int num;

    num =0x40000000;
    return num == (1<<31);
}
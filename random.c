#include <stdio.h>
#include <stdlib.h>

char randchar();
int main(){

    return 0;
}

char randchar(){
    int upper = 90;
    int lower = 65;
    int ret = (rand() % (upper - lower + 1)) + lower;

    return (char)ret;

}
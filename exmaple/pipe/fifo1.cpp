#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>


int main(){
    int res = mkfifo("/tmp/my_fifo", 0777);

    if (res==0) printf("FIFO created\n");
    exit(EXIT_SUCCESS);
}
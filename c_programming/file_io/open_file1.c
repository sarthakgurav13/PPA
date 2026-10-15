#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    int fd = 0;
    fd = open("Hello.txt",O_RDWR);

    if(fd== -1)
    {
        printf("Unable to OPEN file\n");
        return -1;
    }
    else
    {
        printf("File get OPEN with fd : %d\n",fd);
    }
    return 0;
}
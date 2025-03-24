
#include <stdio.h>
#include <stdlib.h> 
#include <fcntl.h>
#include <sys/stat.h>

int main(void)
{
    FILE *fp;
    int num;
    int folder;
   
    char a[] = "Hello ARM Linux!";
    
    fp = fopen("/tmp/linux.txt","w+");
    if(fp == NULL)
    {
        printf("\nFail to open linux.txt!\n");
        exit(-1);
    }

    num = fwrite(a, sizeof(a), 1, fp);
    printf("%d byte data has written to linux.txt\n", num*sizeof(a));

    folder =  mkdir("/tmp/linux", 1);
    if(folder == -1)
    {
        printf("\n Fail to create folder linux!\nIt has existed or the path is error!\n");
        exit(-1);
    }
    printf("Folder linux created success!\n");


    fclose(fp);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main()
{
    
FILE *rd;
char buffer[50];
sprintf(buffer,"mukesh is good man");
rd=popen("wc -c","w"); 
fwrite(buffer,sizeof(char),strlen(buffer),rd); // to write the data into the pipe
pclose(rd);
}

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
 int fd[2],n,lenth;
 char buffer[100];
 pid_t p;
 pipe(fd); //creates a unidirectional pipe with two end fd[0] and fd[1]
 p=fork();
if(p>0) //parent
{
    printf("Parent Passing value to child\n");
    write(fd[1],"mukesh\n",7); //fd[1] is the write end of the pipe
    wait();
}
else // child
{
    printf("Child printing received value\n");
    n=read(fd[0],buffer,100); //fd[0] is the read end of the pipe
    write(1,buffer,n);
}
lenth=strlen(str);// find lenth of the string 
printf("lenth of the string %s\n",lenth);

}
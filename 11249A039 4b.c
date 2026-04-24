#include<stdio.h>
#include<unistd.h>
int main(void)
{
int pid,status,exitch;
if((pid=fork())==-1)
{
perror("error");
exit (0);
}
if(pid==0)
{
sleep(1);
printf("child process");
exit (0);
}
else
{
printf("parent process\n");
if((exitch=wait(&status))==-1)
{

4

perror("during wait()");
exit (0);
}
printf("\nparent existing\n");
exit (0);
}
}

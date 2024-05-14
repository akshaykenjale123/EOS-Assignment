//1. Input signal number and a process id from user. Send given signal to the given process using kill() syscall

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
	int pid,sig_no;

	printf("Enter procedd id\n");
	scanf("%d",&pid);

	printf("enter signal number\n");
	scanf("%d",&sig_no);

	int ret =kill(pid,sig_no);
	printf("return number is %d",ret);
	return 0;

}

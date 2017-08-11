#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
 
int main(void)
{
	char s[32] = {0};
 
	int fd = open("/sys/class/net/eth0/address", O_RDONLY);
	if (fd < 0) {
		printf("open error! \n");
		return 0;
	}
 
	read(fd, s, 37);
 
	printf("mac address is '%s'\n", s);
 
	close(fd);
 
	return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int fd;
	char buf[14];

	/* write */
	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		printf("Failed to create and open the file.\n");
		return (1);
	}

	write(fd, "Hello World!\n", 13);
	close(fd);

	/* read */

	fd = open("myfile.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("Failed to create and open the file.\n");
		return (1);
	}

	read(fd, buf, 13);
	buf[13] = '\0';

	close (fd);

	printf("%s", buf);

	return (0);
}	

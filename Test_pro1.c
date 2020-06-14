#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h> 

int main(int argc, char *argv[]) {

	int fd, sz;
	char data[100];	
	if(argc < 3) {
		printf("Error: Please give the complete arguments\n");
	}
	fd = open(argv[0], O_RDWR);
	if(fd == NULL) {
		printf("Error while opening file\n");
	}
	if (lseek(fd, argv[1], SEEK_CUR) == -1) {
        	printf("cannot seek\n");
	}
    	else {
        	printf("seek OK\n");
    	}
	sz = read(fd, data, argv[2]);
	if(strcmp(argv[3], data) == 0) {
		printf("Both strings are same");
	}
	
	
	

}

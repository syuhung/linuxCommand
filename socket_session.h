#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/socket.h>

extern const MAXLINE = 4096

//int socket(int domain, int type, int protocol);

int main(int argc, char** argv){
	int listenfd, connfd;
	int socket_var = socket(AF_INET, SOCK_STREAM, 0);
}

#include <iostream>
#include <stdlib.h>
#include <string>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

const int PORT = 8888
const int BACKLOG = 2

int main(int argc, char *argv[]){

	int socket_server socket_client;
	sockaddr_in server_addr;
	sockaddr_in client_addr;
	int err;
	pid_t pid;

	socket_server = socket(AF_INET, SOCK_STREAM, 0);
	if (socket_server < 0) {
		std::cout << "socket error" << std::endl;
		return -1;
	}

	bzero(&server_addr, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(PORT);

	err = bind(socket_server, (sockaddr*)&server_addr, sizeof(server_addr));
	if (err < 0){
		std::cout << "bind error" << std::endl;
		return -1;
	}

	err = listen(socket_server, BACKLOG);
	if (err < 0) {
		std::cout << "listen error" << std::endl;
		return -1;
	}

	for(;;) {

		socklen_t addrlen = sizeof(sockaddr);
		socket_client = accept(socket_server, (sockaddr*)&client_addr, &addrlen);

		if (socket_client < 0){
			continue;
		}

		pid = fork();
		if (pid == 0) {
			close(socket_server);
		}else{
			close(socket_client);
		}
	}
}

#include <iostream>
#include <stdlib.h>
#include <string>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>

const int PORT = 8888

int main(int argc, char *argv[])
{
	int socket_client;
	sockaddr_in server_addr;
	
	socket_client = socket(AF_INET, SOCK_STREAM, 0);
	if (socket_client < 0) {
		std::cout << "socket error" << std::endl;
		return -1;
	}

	bzero(&server_addr, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(PORT);

	inet_pton(AF_INET, argv[1], &server_addr.sin_addr);

	connect(socket_client, (sockaddr*)&server_addr, sizeof(server_addr));
	process_conn_client(s);
	close(s);
	return 0;
}

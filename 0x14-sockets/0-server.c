#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>

/**
 * main -  opens an IPv4/TCP socket, and listens to traffic on port 12345
 * Return: 0 success
 **/
int main(void)
{
	int sock;
	int port;
	struct sockaddr_in addr;

	sock = socket(PF_INET, SOCK_STREAM, 0);
	if (sock == -1)
		return (EXIT_FAILURE);

	port = 12345;
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port = htons(port);

	if (bind(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0)
		return (EXIT_FAILURE);

	listen(sock, 3);
	printf("Server listening on port %d\n", port);
	while (1)
		;
	return (EXIT_SUCCESS);
}

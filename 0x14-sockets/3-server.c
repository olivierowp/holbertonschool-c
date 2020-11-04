#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - opens an IPv4/TCP socket, and listens to traffic on port 12345
 * Return: 0 success
 **/
int main(void)
{
	int sock;
	int client_size;
	int client_sock;
	int port;
	struct sockaddr_in addr, client;
	char buffer[BUFSIZ];

	sock = socket(AF_INET, SOCK_STREAM, 0);
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
	client_size = sizeof(client);
	client_sock = accept(sock,
						 (struct sockaddr *)&client,
						 (socklen_t *)&client_size);
	if (client_sock < 0)
		return (EXIT_FAILURE);

	printf("Client connected: %s\n", inet_ntoa(client.sin_addr));

	if (recv(client_sock, buffer, BUFSIZ, 0) < 0)
		return (EXIT_FAILURE);
	printf("Message received: \"%s\"\n", buffer);

	close(client_sock);
	close(sock);
	return (EXIT_SUCCESS);
}

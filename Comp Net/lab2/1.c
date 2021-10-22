#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#define MAX 80
#define PORT 3541
#define SA struct sockaddr

void func(int sockfd)
{
	char buff[MAX];
	int n;
	for (;;) {
		bzero(buff, MAX);

		read(sockfd, buff, sizeof(buff));
		printf("From client: %s\t To client : ", buff);
		bzero(buff, MAX);
		n = 0;
		while ((buff[n++] = getchar()) != '\n');

		write(sockfd, buff, sizeof(buff));

		if (strncmp("bye", buff, 4) == 0) {
			printf("Server Exit...\n");
			break;
		}
	}
}
int main()
{
	int sockfd, connfd, len;
	struct sockaddr_in servaddr, cli;
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd == -1) {
		printf("socket creation failed...\n");
		exit(0);
	}
	else
		printf("Socket successfully created..\n");
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(PORT);

	if ((bind(sockfd, (SA*)&servaddr, sizeof(servaddr))) != 0) {
		printf("socket bind failed...\n");
		exit(0);
	}
	else
		printf("Socket successfully binded..\n");

	if ((listen(sockfd, 5)) != 0) {
		printf("Listen failed...\n");
		exit(0);
	}
	else
		printf("Server listening..\n");
	len = sizeof(cli);

	connfd = accept(sockfd, (SA*)&cli, &len);
	if (connfd < 0) {
		printf("server acccept failed...\n");
		exit(0);
	}
	else
		printf("server acccept the client...\n");

	func(connfd);

	close(sockfd);
}


#include <stdio.h>                                                                                                                                                      
#include<string.h>                                                                                                                                                      
#include <stdlib.h>                                                                                                                                                     
#include <unistd.h>                                                                                                                                                     
#include <sys/types.h>                                                                                                                                                  
#include <sys/socket.h>                                                                                                                                                 
#include <netinet/in.h>                                                                                                                                                 
                                                                                                                                                                        
int main()                                                                                                                                                              
{                                                                                                                                                                       
        int client_socket = socket(AF_INET, SOCK_STREAM, 0);                                                                                                            
        struct sockaddr_in server_address;                                                                                                                              
        server_address.sin_family = AF_INET;                                                                                                                            
        server_address.sin_port = htons(3514);                                                                                                                          
        server_address.sin_addr.s_addr = INADDR_ANY;                                                                                                                    

        int connection_status = connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address));                                                     
        if (connection_status < 0)                                                                                                                                      
        {                                                                                                                                                               
                printf("Connection not established\n");                                                                                                                 
                return -1;                                                                                                                                              
        }                                                                                                                                                               
                                                                                                                                                                        
                                                                                                                                                                        
        char response[200];                                                                                                                                             
        int s=200;                                                                                                                                                      
        char buf[200];                                                                                                                                                  
        while(1){                                                                                                                                                       
                printf("\nYour message : ");                                                                                                                            
                fgets(response,sizeof(response),stdin);                                                                                                                 
                send(client_socket, response, sizeof(response), 0);                                                                                                     
                if(strcmp(response,"bye")==10)                                                                                                                          
                        break;                                                                                                                                          
                recv(client_socket, &buf, sizeof(buf), 0);                                                                                                              
                if (sizeof(buf) > 0)                                                                                                                                    
                {                                                                                                                                                       
                        printf("Received message: %s", buf);                                                                                                            
                        if(strcmp(buf,"bye")==10)                                                                                                                       
                                break;                                                                                                                                  
                }                                                                                                                                                       
        }                                                                                                                                                               
                                                                                                                                                                        
        close(client_socket);                                                                                                                                           
        return 0;                                                                                                                                                       
                                                                                                                                                                        
}
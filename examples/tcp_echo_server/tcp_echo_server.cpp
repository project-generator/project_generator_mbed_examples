#include "mbed.h"
#include "EthernetInterface.h"
 
#define ECHO_SERVER_PORT   7
 
int main (void) {
    EthernetInterface eth;
    eth.init(); //Use DHCP
    eth.connect();
    printf("\nServer IP Address is %s\n", eth.getIPAddress());
    
    TCPSocketServer server;
    server.bind(ECHO_SERVER_PORT);
    server.listen();
    
    while (true) {
        printf("\nWait for new connection...\n");
        TCPSocketConnection client;
        server.accept(client);
        client.set_blocking(false, 1500); // Timeout after (1.5)s
        
        printf("Connection from: %s\n", client.get_address());
        char buffer[256];
        while (true) {
            int n = client.receive(buffer, sizeof(buffer));
            if (n <= 0) break;
            
            // print received message to terminal
            buffer[n] = '\0';
            printf("Received message from Client :'%s'\n",buffer);
            
            // reverse the message
            char temp;
            for(int f = 0, l = n-1; f<l; f++,l--){
                temp = buffer[f];
                buffer[f] = buffer[l];
                buffer[l] = temp;
                }
            
            // print reversed message to terminal
            printf("Sending message to Client: '%s'\n",buffer);
            
            // Echo received message back to client
            client.send_all(buffer, n);
            if (n <= 0) break;
        }
        
        client.close();
    }
}

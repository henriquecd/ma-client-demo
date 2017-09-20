#ifndef CLIENT_DEMO_
#define CLIENT_DEMO_

#include "kerberos/src/protocol/protocol.h"

#include <stdio.h>

void errorCallback(int err){
    printf("errorCallback = %d\n", err);
}

int main(int argc, char **argv) {

/*    char* host = "http://172.28.0.2/";*/
/*    char* path = "/kerberos/receiveRequestAS";*/
/*    char* post = "arguments";*/
/*    int postLen = strlen(post);*/

/*    send_message(post, postLen, host, path);*/   

	char* host = "http://localhost:8000/";
    char* reqAS = "kerberos/requestAS";
	char* reqAP = "kerberos/requestAP";
	//char* reqAS = "/kerberos/receiveRequestAS";
	//char* reqAP = "/kerberos/receiveRequestAP";
	printf("%s\n%s\n%s\n", host, reqAS, reqAP);
	printf("Initializing Kerberos\n");
	fflush(stdout);
    errno_t ret = initializeKerberos(host, strlen(host), reqAS, strlen(reqAS), reqAP, strlen(reqAP));
    printf("initializeKerberos ret = %d\n", ret);
    
    ret = setCallback(&errorCallback);
	printf("setCallback ret = %d\n", ret);
	
    ret = executeKerberosHandshake();
    printf("executeKerberosHandshake ret = %d\n", ret);
	return 0;
}

#endif /* CLIENT_DEMO_ */

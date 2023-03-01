#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/time.h>

#ifndef TCP_H_DEFINED
#define TCP_H_DEFINED
// aifamily: AF_INET6/AF_INET
int lookup(char *host, char *portnr, int aifamily, struct addrinfo **res);
int connect_to(struct addrinfo *addr, struct timeval *rtt);
#endif /* TCP_H_DEFINED */

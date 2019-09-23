/*
accept signal
*/
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h> //malloc
#include <sys/epoll.h>
#include <errno.h>
#include <signal.h>
#include <assert.h>

#include "reactor.h"
#include "server.h"
#include "header.h"

static int pipefd[2];

void sig_handler( int sig );

void addsig( int sig );

static void handle_signal_event(handle_event_msg_t* handle_event_msg);

event_handler_t* create_signal_accepter(reactor_t* r,int sig);

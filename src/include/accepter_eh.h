/*
accept and receive socket
*/

#include "reactor.h"
#include "server.h"
#include "header.h"

static void package_handler(handle_event_msg_t* handle_event_msg);

event_handler_t* create_package_operater(int fd,reactor_t *r);

static void handle_event(handle_event_msg_t* handle_event_msg);

event_handler_t* create_acceptor(int fd, reactor_t* r);

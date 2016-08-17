/*
 ============================================================================
 Name        : server.c
 Author      : vincent
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

#include "module.h"
#include "anet.h"
#include "ae.h"
#include "alog.h"
#include "def.h"

int main(void) {
	aeEventLoop *el = aeCreateEventLoop(MAX_CLIENTS);

	aDebug("event loop created...\n");


	aeMain(el);
	aeDeleteEventLoop(el);

	return EXIT_SUCCESS;
}

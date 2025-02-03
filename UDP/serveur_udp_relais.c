#include "udp.h"
#include "erreur.h"
#include "nombre.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>

int main(int argc, char** argv) {
	traiter_commande(argc==1, argv[0], "<port>\nmauvais nombre d'arguments");
	traiter_commande(est_un_port_non_reserve(), argv[0], "<port>\n<port> est un port non réservé");
	
	/*A COMPLETER*/

	exit(0);
}

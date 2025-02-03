#include "udp.h"
#include "erreur.h"
#include "nombre.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>

int main(int argc, char** argv) {
	traiter_commande(argc==3, argv[0], "<adresse IP> <port> <message>\nmauvais nombre d'aguments");
	traiter_commande(est_une_adresse_IP(), argv[0], "<adresse IP> <port> <message>\n<adresse IP> est une adresse IP au format décimal pointé");
	traiter_commande(argc==3, argv[0], "<adresse IP> <port> <message>\n<port> est un port non réservé");
	
	
	/*A COMPLETER*/
	
	exit(0);
}

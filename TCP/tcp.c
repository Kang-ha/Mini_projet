#include "erreur.h"
#include "tcp.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

/* Créer une socket */
int creer_socket(char *adresseIP, int port) {
	int sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == -1) {
		printf("Echec de création socket\n");
		traiter_erreur(__FUNCTION__);
	} return sock;
}

/* Connecter une socket */
void connecter_socket(int socket_client, struct sockaddr_in *addresse_serveur) {
	if (connect(socket_client, (struct sockaddr *)addresse_serveur, sizeof(*addresse_serveur)) < 0) {
		perror("Erreur lors de la connexion au serveur.");
		traiter_erreur(__FUNCTION__);
	}
}

/* Attacher une socket */
void attacher_socket() {
	/*A COMPLETER*/
	traiter_erreur(__FUNCTION__);
}

/* Dimensionner la file d'attente d'une socket */
void dimensionner_file_attente_socket(int taille) {
	/*A COMPLETER*/
	traiter_erreur(__FUNCTION__);
}

/*Initialiser la structure adresse client */
void init_addr_client(struct sockaddr_in *addresse_client, int port) {
	memset(addresse_client, 0, sizeof(struct sockaddr_in));
	addresse_client -> sin_family = AF_INET;
	addresse_client -> sin_addr.s_addr = INADDR_ANY;
	addresse_client -> sin_port = htons(port);
}

/* Attendre une connexion */
int attendre_connexion(int socket_serv) {
	struct sockaddr_in addresse_client;
	socklen_t taille_addresse = sizeof(addresse_client);

	int socket_client = accept(socket_serv, (struct sockaddr *)&addresse_client, &taille_addresse);
	if (socket_client < 0) {
		perror("Erreur lors de l'acceptation de la connexion.");
		return -1;
	}
}

/* Recevoir un message */
void recevoir_message(int socktraitement, char * buffer) {
	/*A COMPLETER*/
	traiter_erreur(__FUNCTION__);
}

/* Émettre un message */
void envoyer_message(int socktraitement, char * message) {
	/*A COMPLETER*/ 
	traiter_erreur(__FUNCTION__);
}

/* Fermer la connexion */
void fermer_connexion(int socktraitement) {
	/*A COMPLETER*/
	traiter_erreur(__FUNCTION__);
}

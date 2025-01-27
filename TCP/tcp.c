#include "erreur.h"
#include "tcp.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

/* Créer une socket */
int creer_socket(char* adresseIP, int port) {
	int sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == -1) {
		printf("Echec de création socket\n");
		traiter_erreur(__FUNCTION__);
	} return sock;
}

/* Connecter une socket */
void connecter_socket(int sock) {
	/*A COMPLETER*/
	traiter_erreur(__FUNCTION__);
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
void init_addr_client() {
	/*A COMPLETER*/
}

/* Attendre une connexion */
int attendre_connexion() {
	int socktraitement = accept(serv_socket, (struct sockaddr *)&client_addr, &client_addr_len);
	if (socktraitement < 0) {
		printf("Echec de connexion.\n");
		traiter_erreur(__FUNCTION__);
	} return socktraitement;
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

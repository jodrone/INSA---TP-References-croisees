/*************************************************************************
                           Main  -  Programme Principal 
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---------- Interface de la tâche <Main> (fichier Main.h) -------
#if ! defined ( MAIN_H )
#define MAIN_H

//------------------------------------------------------------------------ 
// Rôle de la tâche <Main>
//
//Cette tache assemble les briques du programme afin de permettre
//son utilisation globale de la maniere suivante :
//
//1.       refCroisees [-e] [-k fichier_mots_clés] [nomfichier]+
//2.       refCroisees [-k fichier_mots_clés] [nomfichier]+/
//
//Options : 
//	-k : Indique le fichier de mots clés à utiliser.
//	Si cette option est absente, les mots clés du C++ sont utilisés.
//
//	-e : Cette option permet d'afficher les identificateurs qui ne sont pas
//	présents dans le fichier de mots clés.
//
//	En cas d'erreur d'appel, on affiche un message d'erreur ainsi qu'un
//	mode d'emploi permettant à l'utilisateur de corriger son erreur
//------------------------------------------------------------------------ 

/////////////////////////////////////////////////////////////////  INCLUDE
//--------------------------------------------------- Interfaces utilisées
#include "RefCroisees.h"
#include "Flot.h"




//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
// type Nom ( liste de paramètres );
// Mode d'emploi :
//
// Contrat :
//

int main ( int argc,const char* argv[]);
// Mode d'emploi :
// Appel principal

void Usage( char* aPhrase[] = "" );
// Mode d'emploi :
// Affiche le mode d'emploi du programme, ainsi qu'un message d'erreur personnalisé



#endif // MAIN_H

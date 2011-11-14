/*************************************************************************
                           Main  -  Programme Principal 
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---------- Interface de la t�che <Main> (fichier Main.h) -------
#if ! defined ( MAIN_H )
#define MAIN_H

//------------------------------------------------------------------------ 
// R�le de la t�che <Main>
//
//Cette tache assemble les briques du programme afin de permettre
//son utilisation globale de la maniere suivante :
//
//1.       refCroisees [-e] [-k fichier_mots_cl�s] [nomfichier]+
//2.       refCroisees [-k fichier_mots_cl�s] [nomfichier]+/
//
//Options : 
//	-k : Indique le fichier de mots cl�s � utiliser.
//	Si cette option est absente, les mots cl�s du C++ sont utilis�s.
//
//	-e : Cette option permet d'afficher les identificateurs qui ne sont pas
//	pr�sents dans le fichier de mots cl�s.
//
//	En cas d'erreur d'appel, on affiche un message d'erreur ainsi qu'un
//	mode d'emploi permettant � l'utilisateur de corriger son erreur
//------------------------------------------------------------------------ 

/////////////////////////////////////////////////////////////////  INCLUDE
//--------------------------------------------------- Interfaces utilis�es
#include "RefCroisees.h"
#include "Flot.h"




//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
// type Nom ( liste de param�tres );
// Mode d'emploi :
//
// Contrat :
//

int main ( int argc,const char* argv[]);
// Mode d'emploi :
// Appel principal

void Usage( char* aPhrase[] = "" );
// Mode d'emploi :
// Affiche le mode d'emploi du programme, ainsi qu'un message d'erreur personnalis�



#endif // MAIN_H

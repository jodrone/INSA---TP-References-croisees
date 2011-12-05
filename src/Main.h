/*************************************************************************
                           Main  -  Programme Principal 
                             -------------------
    debut                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---------- Interface de la tache <Main> (fichier Main.h) -------
#if ! defined ( MAIN_H )
#define MAIN_H

//------------------------------------------------------------------------ 
// Role de la tache <Main>
//
//Cette tache traite les arguments passes au programme afin de permettre
//son utilisation globale de la maniere suivante :
//
//1.       refCroisees [-e] [-k fichier_mots_cles] [nomfichier]+
//2.       refCroisees [-k fichier_mots_cles] [nomfichier]+/
//
//Options : 
//	-k : Indique le fichier de mots cles a utiliser.
//	Si cette option est absente, les mots cles du C++ sont utilises.
//
//	-e : Cette option permet d'afficher les identificateurs qui ne sont pas
//	presents dans le fichier de mots cles.
//
//	En cas d'erreur d'appel, on affiche un message d'erreur ainsi qu'un
//	mode d'emploi permettant a l'utilisateur de corriger son erreur
//------------------------------------------------------------------------ 

/////////////////////////////////////////////////////////////////  INCLUDE
//--------------------------------------------------- Interfaces utilisees

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques


int main ( int argc,const char* argv[] );
// Mode d'emploi :
// Appel principal

void Usage( string aPhrase = "" );
// Mode d'emploi :
// Affiche le mode d'emploi du programme, ainsi qu'un message d'erreur personnalise



#endif // MAIN_H

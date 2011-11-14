/*************************************************************************
                           Flot  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Flot> (fichier Flot.h) --
#if ! defined ( FLOT_H )
#define FLOT_H

//--------------------------------------------------- Interfaces utilis�es
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Flot>
// 
// La classe Flot a pour r�le de lire et chercher les identificateurs dans 
// les fichiers source.
//
//------------------------------------------------------------------------ 

class Flot 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	
	string ChercherId(string nomFic, RefCroisees &desRefCroisees);
	// Mode d'emploi : lit le fichier dont le chemin est pass� en parametre
	// et renvoie une string contenant les identificateurs valides s�par�s
	// par le caract�re '\n'
	//
	// contrat :
	//

	string FindNextId(string &phrase);
	// Mode d'emploi : renvoie le premier mot de la phrase et le supprime 
	// de la phrase.
	// Il supprime �galement les commentaires et les chaines de caract�res
	//
	// Contrat :
	//

	bool IdValide( string nomId );
	// Mode d'emploi : renvoie vrai si nomId est un identificateur valide
	//
	// Contrat :
	//

  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//


//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- M�thodes prot�g�es	
	
//----------------------------------------------------- Attributs prot�g�s

};

//----------------------- Autres d�finitions d�pendantes de <Fichier>

#endif // FLOT_H

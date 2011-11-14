/*************************************************************************
                           Flot  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Flot> (fichier Flot.h) --
#if ! defined ( FLOT_H )
#define FLOT_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Flot>
// 
// La classe Flot a pour rôle de lire et chercher les identificateurs dans 
// les fichiers source.
//
//------------------------------------------------------------------------ 

class Flot 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	
	string ChercherId(string nomFic, RefCroisees &desRefCroisees);
	// Mode d'emploi : lit le fichier dont le chemin est passé en parametre
	// et renvoie une string contenant les identificateurs valides séparés
	// par le caractère '\n'
	//
	// contrat :
	//

	string FindNextId(string &phrase);
	// Mode d'emploi : renvoie le premier mot de la phrase et le supprime 
	// de la phrase.
	// Il supprime également les commentaires et les chaines de caractères
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
//----------------------------------------------------- Méthodes protégées	
	
//----------------------------------------------------- Attributs protégés

};

//----------------------- Autres définitions dépendantes de <Fichier>

#endif // FLOT_H

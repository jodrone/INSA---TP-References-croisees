/*************************************************************************
                           Flot  -  description
                             -------------------
    debut                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Flot> (fichier Flot.h) --
#if ! defined ( FLOT_H )
#define FLOT_H

//--------------------------------------------------- Interfaces utilisees
#include <string>
#include "RefCroisees.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Role de la classe <Flot>
// 
// La classe Flot a pour role de lire et chercher les identificateurs dans
// les fichiers source.
//
//------------------------------------------------------------------------ 

class Flot 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
	
	void RemplirMotsCles(string nomFicMC, RefCroisees &uneRefMotsCles); 
	// Mode d'emploi : rempli les références de mots clés avec le fichier.
	//

	void CreerRefCrois(string nomFic, RefCroisees &uneRefMotsCles, 
							RefCroisees &desRefCroisees, bool exclure = 0);
	// Mode d'emploi : lit le fichier dont le chemin est passe en parametre
	// et renseigne desRefCroisees avec les occurrences des identificateurs
	// rencontrés.
	// Lorsque exclure vaut 0, les identificateurs entrés dans desRefCroisees
	// seront ceux de RefMotsCles, sinon, les identificateurs seront tous les
	// identificateurs exceptés ceux de RefMotsCles.
	//
	// contrat :
	//

	string ChercherId(string nomFic, RefCroisees &desRefCroisees);
	// Mode d'emploi : lit le fichier dont le chemin est passe en parametre
	// et renvoie une string contenant les identificateurs valides separes
	// par le caractere '\n', entre les occurrences dans desRefCroisees.
	//
	// contrat :
	//

	string FindNextId(string &phrase);
	// Mode d'emploi : renvoie le premier mot de la phrase et le supprime 
	// de la phrase.
	// Il supprime egalement les commentaires et les chaines de caracteres
	//
	// Contrat :
	//

	bool IdValide( string nomId );
	// Mode d'emploi : renvoie vrai si nomId est un identificateur valide
	//
	// Contrat : nomId est compose de caracteres alphanumeriques et de '_'
	//

  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//


//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Methodes protegees
	
//----------------------------------------------------- Attributs proteges

};

//----------------------- Autres definitions dependantes de <Fichier>

#endif // FLOT_H

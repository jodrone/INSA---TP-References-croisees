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

//------------------------------------------------------------------------ 
// Role de la classe <Flot>
// 
// La classe Flot a pour role de lire et chercher les identificateurs dans
// les fichiers source.
//------------------------------------------------------------------------ 

class Flot 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
	
	void RemplirMotsCles(string nomFicMC, RefCroisees &uneRefMotsCles); 
	// Mode d'emploi : rempli les references de mots cles avec le fichier 
	// entre en parametre.
	//

	void CreerRefCrois(string nomFic, RefCroisees &uneRefMotsCles, 
							RefCroisees &desRefCroisees, bool exclure = 0);
	// Mode d'emploi : lit le fichier dont le chemin est passe en parametre
	// et renseigne desRefCroisees avec les occurrences des identificateurs
	// rencontres.
	// Lorsque exclure vaut 0, les identificateurs entres dans desRefCroisees
	// seront ceux de RefMotsCles, sinon, les identificateurs seront tous les
	// identificateurs exceptes ceux de RefMotsCles.

//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Methodes protegees

	string FindNextId(string &phrase,bool & comActif);
	// Mode d'emploi : renvoie le premier mot de la phrase et le supprime 
	// de la phrase.
	// Il supprime egalement les commentaires et les chaines de caracteres
	// Si un commentaire du type "/* */" est rencontre comActif passe a vrai
	// Si comActif est deja a vrai et que la fin de commentaire est rencontree
	// comActif devient faux

	bool IdValide( string nomId );
	// Mode d'emploi : renvoie vrai si nomId est un identificateur valide
	//
	// Contrat : nomId est compose de caracteres alphanumeriques et de '_'

};

#endif // FLOT_H

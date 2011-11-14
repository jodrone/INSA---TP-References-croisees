/*************************************************************************
                           Flot  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Réalisation de la classe <Flot> (fichier Flot.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <fstream>
//------------------------------------------------------ Include personnel
#include "Flot.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

string Flot::ChercherId(string nomFic, RefCroisees &desRefCroisees)
// Algorithme : parcours du fichier, ligne par ligne
{
	string id,ligne,listeId;
	const char SEPARATOR('\n');
	int numLigne(0);

	ifstream fichier(nomFic, ios::in);

	if (fichier)
	{
		cout << "/// Ouverture du fichier ///" << endl;		
		while (getline( fichier, ligne, '\n'))
		{
			numLigne++;
			while (!ligne.empty())
			{
			id = FindNextId(ligne);
			if (IdValide(id))  
				{
					listeId += id;
					listeId += SEPARATOR;
					desRefCroisees.AddReference(id,numLigne);
				}
			}			
		} 
		cout << listeId << endl;

		fichier.close(); 
		cout << "/// Fermeture du fichier ///" << endl;
		return listeId;
	}
	else cerr << "/// Impossible d'ouvrir le fichier ///" << endl;
	return "";
} //----- Fin de ChercherId

string Flot::FindNextId(string &phrase)
// Algorithme : parcours de phrase jusqu'à trouver un caractère spécial
{
	string	mot;
	int		i(0),j(0);
	char	lettre = phrase[i];
	
	while ( (i < phrase.length()-1) && ( isalnum(lettre) || lettre == '_'))
	{		
		i++;
		lettre = phrase[i];
	}

	// Fin de phrase ne se terminant pas par un séparateur
	if ( isalnum(lettre) || lettre == '_') i++;

	mot = phrase.substr(0,i);

	// Cas des commentaires
	if (lettre == '/' && phrase[i+1] == '/') phrase.erase(0,phrase.length());
	// Cas des chaines de caractères
	else if (lettre == '"' && i < phrase.length()-1)
	{
		i++;
		lettre = phrase[i];
		while ( (i < phrase.length()-1) && lettre != '"')
		{		
			i++;
			lettre = phrase[i];
		}
		phrase.erase(0,i+1);
	}
	// cas general
	else phrase.erase(0,i);

	// Début de phrase commençant par un séparateur
	if (i == 0) phrase.erase(0,1);

	return mot;
} //----- Fin de IdValide

bool Flot::IdValide( string nomId )
// Algorithme : Trivial
{
	if (nomId.empty())			return 0;
	else if (isdigit(nomId[0]))	return 0;
	else						return 1;
} //----- Fin de IdValide

//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE

//---------------------------------------

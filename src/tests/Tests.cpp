/*************************************************************************
                           tests  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent
*************************************************************************/

//---  R�alisation de la t�che <tests> (fichier tests.cpp) ---

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>
//------------------------------------------------------ Include personnel
#include "tests.h"
#include "../RefCroisees.h"
#include "../Flot.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//---------------------------------------------------- Variables statiques

//------------------------------------------------------ Fonctions priv�es
//static type nom ( liste de param�tres )
// Mode d'emploi :
//
// Contrat :
//
// Algorithme :
//
//{
//} //----- fin de nom

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques

int main ( ) 
{
// Algorithme :
//
	string adresseFichiers("C:/Users/Jo/Documents/INSA/3IF/TP/TP-references-croisees/INSA---TP-References-croisees/src/fichiers/");
	int a;
	string listeId;
	Flot flot1;
	listeId = flot1.ChercherId(adresseFichiers+="source.txt");
	cin >> a;

} //----- fin de Main

/********
 * Fichier: couche.cpp
 * Auteurs: BOUS0086 & CHAX6081
 * Date: 6 janvier 2026
 * Description: Implémentation des méthodes des classes décrites dans
 *    couche.h.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

// A completer
Couche::Couche()
{
    State = INITIALIZED;
    totalArea = 0;
}
// A completer
Couche::~Couche()
{
}

// A completer
//int Couche::storeShapes()
//{
    //Elle stocke les formes qui font partie de la couche. 
    //Comme toutes les formes sont allouées dynamiquement, elle stocke des pointeurs à des formes.

    //Elle utilise un vecteur pour stocker les formes. 
    //En l’occurrence, elle utilise un vecteur qui stocke des pointeurs de formes.
//}

// A completer
bool Couche::AddShape()
{
    if (State == INACTIVE)
    {
        return false;
    }
    else if (State == ACTIVE)
    {
        //Ajouter une forme au vecteur et a l'affichage
        //Check if operation is successful
        //return true if successful
    }
    //Elle permet l’ajout d’une forme à la suite des autres formes déjà présente. 
    //La forme à ajouter est spécifiée par son pointeur. 
    //Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
}

// A completer
bool Couche::RemoveShape()
{
    if (State == INACTIVE)
    {
        return false;
    }
    else if (State == ACTIVE)
    {
        //Enlever une forme du vecteur et de l'affichage
        //Check if operation is successful
        //return true if successful
    }
    //Elle permet le retrait d’une forme. La forme à retirer est spécifiée par son index dans le vecteur.
    //Si l’opération est une réussite, alors la valeur de retour est le pointeur sur la forme en question. 
    //Si l’opération est un échec, comme avec un index invalide, un pointeur nul est retourné. 
    //La forme retirée de la couche n’est pas détruite.
}

// A completer
//int Couche::GetShape(char VecIndex) const
//{
    //Elle permet d’obtenir une forme stockée. La forme à obtenir est spécifiée par son index dans le vecteur.
    //Si l’opération est une réussite, alors la valeur de retour est le pointeur sur la forme en question. 
    //Si l’opération est un échec, comme avec un index invalide, un pointeur nul est retourné. 
    //La forme n’est pas retirée du vecteur et elle n’est pas détruite.
//}

// A completer
float Couche::GetTotalArea() const
{
    if (State == INACTIVE)
    {
        return false;
    }
    else if (State == ACTIVE)
    {
        //Calculer l’aire totale de la couche
        //Check if operation is successful
        //return true if successful
    }
    //Elle offre la possibilité d’obtenir l’aire totale.
    //L’aire totale de la couche est définie comme la somme des aires des formes qui la compose. 
    //La valeur de retour, l’aire totale, est un nombre réel.
}

// A completer
bool Couche::MoveLayer(int deltaX, int deltaY)
{
    if (State == INACTIVE)
    {
        return false;
    }
    else if (State == ACTIVE)
    {
        //Translater toutes les formes de la couche
        //Check if operation is successful
        //return true if successful
    }
    //Elle offre la possibilité de translater. 
    //La translation d’une couche est réalisée en faisant la translation de toutes les formes qui la compose. 
    //Les valeurs de translation horizontale et verticale, des entiers, sont passées en paramètres. 
    //Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
}

// A completer
bool Couche::ResetLayer()
{
    if (State == INACTIVE)
    {
        return false;
    }
    else if (State == ACTIVE)
    {
        State = INITIALIZED;
        totalArea = 0;
        //Vider le vecteur de toutes les formes

        unsigned char verifyState = State;
        float verifyArea = totalArea;
        //Valeur de verification pour le vecteur a ajouter

        if (verifyState == INITIALIZED && verifyArea == 0 /*&& vecteur de formes est vide*/)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //Elle offre la possibilité de réinitialiser. 
    //L’état de la couche est donc ramené à son état initial, comme lors de sa création. 
    //Cette opération vide donc le vecteur et toutes les formes sont détruites.
    //Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
    
}

bool Couche::SetState(unsigned char newState)
{
    State = newState;
    unsigned char verifyState = State;
    if (verifyState == newState)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// A completer
//Couche::DisplayLayer();
//{
    //Elle permet l’affichage du contenu, donc de toutes ses formes. 
    //L’endroit à afficher (le flot) est spécifié en paramètre. 
    //La figure A.2 montre comment une couche doit être affichée. 
    //On peut d’ailleurs y observer que l’état de la couche affecte l’affichage.
//}
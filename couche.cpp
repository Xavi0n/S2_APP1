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
bool Couche::AddShape(forme* Shape)
{
    if(State == ACTIVE)
    {
        if (Shape == nullptr)
        {
            return false;
        }
        VectorCouche.addElement(Shape);
        return true;
    }
    else
    {
        return 0;
    }

        //Ajouter une forme au vecteur et a l'affichage
        //Check if operation is successful
        //return true if successful
    //Elle permet l’ajout d’une forme à la suite des autres formes déjà présente. 
    //La forme à ajouter est spécifiée par son pointeur. 
    //Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
}

// A completer
int Couche::RemoveShape(int index)
{
    if(State == ACTIVE)
    {
        if (index >= VectorCouche.getSize())
        {
            return nullptr;
        }
        int ptrForme = VectorCouche.getData(index);
        VectorCouche.removeElement(index);
        return ptrForme;
    }
    else
    {
        return 0;
    }

        //Enlever une forme du vecteur et de l'affichage
        //Check if operation is successful
        //return true if successful
    
    //Elle permet le retrait d’une forme. La forme à retirer est spécifiée par son index dans le vecteur.
    //Si l’opération est une réussite, alors la valeur de retour est le pointeur sur la forme en question. 
    //Si l’opération est un échec, comme avec un index invalide, un pointeur nul est retourné. 
    //La forme retirée de la couche n’est pas détruite.
}

// A completer
Forme* Couche::GetShape(int index)
{
    if(State == ACTIVE)
    {
        if (index >= VectorCouche.getSize())
        {
            return nullptr;
        }
        return VectorCouche.getData(index);
    }
    else
    {
        return 0;
    }

    //Elle permet d’obtenir une forme stockée. La forme à obtenir est spécifiée par son index dans le vecteur.
    //Si l’opération est une réussite, alors la valeur de retour est le pointeur sur la forme en question. 
    //Si l’opération est un échec, comme avec un index invalide, un pointeur nul est retourné. 
    //La forme n’est pas retirée du vecteur et elle n’est pas détruite.
}

// A completer
double Couche::GetTotalArea() 
{
    if(State == ACTIVE)
    {
        int TotalArea = 0;
        for (int i = 0; i < VectorCouche.getSize(); ++i)
        {
            TotalArea = TotalArea + VectorCouche.getData(i)->getArea();
        }
        return TotalArea;
    }
    else
    {
        return 0;
    }
    
    
}

// A completer
bool Couche::MoveLayer(int deltaX, int deltaY)
{
    
    if(State == ACTIVE)
    {
        for (int i = 0; i < VectorCouche.getSize(); ++i)
        {
            int newX = VectorCouche.getData(i)->getX() + deltaX;
            int newY = VectorCouche.getData(i)->getY() + deltaY;
            VectorCouche.getData(i)->setBottomLeft(newX, newY);
        }
        return 1;
    }
    else
    {
        return 0;
    }
        //Translater toutes les formes de la couche
        //Check if operation is successful
        //return true if successful
    
    //Elle offre la possibilité de translater. 
    //La translation d’une couche est réalisée en faisant la translation de toutes les formes qui la compose. 
    //Les valeurs de translation horizontale et verticale, des entiers, sont passées en paramètres. 
    //Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
}

// A completer
bool Couche::ResetLayer()
{
    if(State != INITIALIZED)
    {
        State = INITIALIZED;
        VectorCouche.deleteData();
        return 1;
    }
    else
    {
        return 0;
    }
    //Elle offre la possibilité de réinitialiser. 
    //L’état de la couche est donc ramené à son état initial, comme lors de sa création. 
    //Cette opération vide donc le vecteur et toutes les formes sont détruites.
    //Une valeur de retour booléenne indique si l’opération est une réussite ou un échec.
    
}

bool Couche::SetState(int newState)
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
void Couche::DisplayLayer(std::ostream& out)
{
     out << "[Couche ";

    if (State == INITIALIZED)
        out << "INITIALIZED] ";
    else if (State == ACTIVE)
        out << "ACTIVE] ";
    else
        out << "INACTIVE] ";

    for (int i = 0; i < VectorCouche.getSize(); ++i)
    {
        if (VectorCouche.getData(i) != nullptr)
        {
            out << *(VectorCouche.getData(i)) << " "; // Supposons que Forme a un opérateur<<
        }
        else
        {
            out << "[vide] ";
        }
    }
    out << std::endl;
    //Elle permet l’affichage du contenu, donc de toutes ses formes. 
    //L’endroit à afficher (le flot) est spécifié en paramètre. 
    //La figure A.2 montre comment une couche doit être affichée. 
    //On peut d’ailleurs y observer que l’état de la couche affecte l’affichage.
}

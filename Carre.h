/*
-----------------------------------------------------------------------------------
Laboratoire : 01
Fichier     : Vecteur.h
Groupe      : Labo_01_E
Auteur(s)   : Melvin Merk, Gabrielle Thurnherr
Date        : 24.02.2020

But         : ce fichier contient la déclaration de classe vecteur ainsi que la
							définition de ses constructeurs

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
 */

#ifndef LABO1_CARRE_H
#define LABO1_CARRE_H

#include "Couleur.h"

class Carre {
    friend std::ostream& operator<<(std::ostream& os, const Carre& carre);
public:
    // Constructeur par défaut (le membre privé couleur sera automatiquement construit par défaut)
    Carre() : cote(0) {};
    // Constructeur avec paramètre
    Carre(double cote, Couleur couleur) : cote(cote), couleur(couleur) {};

    double getCote() const;
    void setCote(double cote);

    Couleur getCouleur() const;
    void setCouleur(const Couleur &couleur);

    double getSurface() const;

private:
    double cote;
    Couleur couleur;
};


#endif //LABO1_CARRE_H

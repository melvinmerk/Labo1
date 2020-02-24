//
// Created by Melvin on 20/02/2020.
//

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

    void setCouleur(const Couleur &couleur);
    Couleur getCouleur() const;

    double getSurface() const;

private:
    double cote;
    Couleur couleur;
};


#endif //LABO1_CARRE_H

//
// Created by Melvin on 20/02/2020.
//

#ifndef LABO1_CERCLE_H
#define LABO1_CERCLE_H

#include "Couleur.h"


class Cercle {
    friend std::ostream& operator<<(std::ostream& os, const Cercle& cercle);
public:
    // Constructeur par défaut (le membre privé couleur sera automatiquement construit par défaut)
    Cercle() : rayon(0) {};
    // Constructeur avec paramètre
    Cercle(double rayon, Couleur couleur) : rayon(rayon), couleur(couleur) {};

    double getRayon() const;
    void setRayon(double rayon);

    void setCouleur(const Couleur &couleur);
    Couleur getCouleur() const;

    double getSurface() const;

private:
    double rayon;
    Couleur couleur;
};


#endif //LABO1_CERCLE_H

//
// Created by Melvin on 24/02/2020.
//

#ifndef LABO1_TRIANGLE_H
#define LABO1_TRIANGLE_H

#include "Couleur.h"

class Triangle {
    friend std::ostream& operator<<(std::ostream& os, const Triangle& triangle);
public:
    // Constructeur par défaut (le membre privé couleur sera automatiquement construit par défaut)
    Triangle() : base(0), hauteur(0) {};
    // Constructeur avec paramètre
    Triangle(double base, double hauteur, Couleur couleur) : base(base), hauteur(hauteur), couleur(couleur) {};

    double getBase() const;
    void setBase(double base);

    double getHauteur() const;
    void setHauteur(double hauteur);

    void setCouleur(const Couleur &couleur);
    Couleur getCouleur() const;

    double getSurface() const;

private:
    double base;
    double hauteur;
    Couleur couleur;
};

#endif //LABO1_TRIANGLE_H

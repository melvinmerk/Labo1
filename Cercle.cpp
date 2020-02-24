//
// Created by Melvin on 20/02/2020.
//

#include "Cercle.h"
#include <cmath> // Pour M_PI

double Cercle::getRayon() const {
    return this->rayon;
}
void  Cercle::setRayon(double rayon) {
    this->rayon = rayon;
}

Couleur Cercle::getCouleur() const {
    return this->couleur;
}
void Cercle::setCouleur(const Couleur &couleur) {
    this->couleur = couleur;
}

double Cercle::getSurface() const {
    return this->rayon * this->rayon * M_PI;
}

std::ostream& operator<<(std::ostream& os, const Cercle& cercle) {
    os  << "Rayon: " << cercle.rayon
        << " Surface: " << cercle.getSurface()
        << " Couleur: " << cercle.couleur;
    return os;
}
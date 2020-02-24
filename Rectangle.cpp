//
// Created by Melvin on 24/02/2020.
//

#include "Rectangle.h"

double Rectangle::getLargeur() const {
    return this->largeur;
}

void Rectangle::setLargeur(double largeur) {
    this->largeur = largeur;
}

double Rectangle::getLongueur() const {
    return this->longueur;
}

void Rectangle::setLongueur(double longueur) {
    this->longueur = longueur;
}

void Rectangle::setCouleur(const Couleur &couleur) {
    this->couleur = couleur;
}

Couleur Rectangle::getCouleur() const {
    return this->couleur;
}

double Rectangle::getSurface() const {
    return this->longueur * this->largeur;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle) {
    os  << "Largeur: " << rectangle.largeur
        << " Longueur: " << rectangle.longueur
        << " Surface: " << rectangle.getSurface()
        << " Couleur: " << rectangle.couleur;

    return os;
}

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
    os  << "Rectangle = "
        << " Largeur: " << rectangle.largeur
        << " Longueur: " << rectangle.longueur
        << " Surface: " << rectangle.getSurface()
        << " Couleur: " << rectangle.couleur;

    return os;
}

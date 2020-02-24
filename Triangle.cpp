/*
-----------------------------------------------------------------------------------
Laboratoire : 01
Fichier     : Triangle.cpp
Groupe      : Labo_01_E
Auteur(s)   : Melvin Merk, Gabrielle Thurnherr
Date        : 24.02.2020

But         : ce fichier contient la définition des méthodes de la classe Triangle. Elle nous
              permet de créer des formes de type triangle.

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
 */

#include "Triangle.h"

double Triangle::getBase() const {
    return this->base;
}

void Triangle::setBase(double base) {
    this->base = base;
}

double Triangle::getHauteur() const {
    return this->hauteur;
}

void Triangle::setHauteur(double hauteur) {
    this->hauteur = hauteur;
}

Couleur Triangle::getCouleur() const {
    return this->couleur;
}

void Triangle::setCouleur(const Couleur &couleur) {
    this->couleur = couleur;
}

double Triangle::getSurface() const {
    return this->base * this->hauteur / 2.0;
}

std::ostream& operator<<(std::ostream& os, const Triangle& triangle) {
    os  << "Triangle = "
        << " Base: " << triangle.base
        << " Hauteur: " << triangle.hauteur
        << " Surface: " << triangle.getSurface()
        << " Couleur: " << triangle.couleur;

    return os;
}
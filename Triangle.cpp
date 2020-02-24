//
// Created by Melvin on 24/02/2020.
//

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

void Triangle::setCouleur(const Couleur &couleur) {
    this->couleur = couleur;
}

Couleur Triangle::getCouleur() const {
    return this->couleur;
}

double Triangle::getSurface() const {
    return this->base * this->hauteur / 2.0;
}

std::ostream& operator<<(std::ostream& os, const Triangle& triangle) {
    os  << "Base: " << triangle.base
        << " Hauteur: " << triangle.hauteur
        << " Surface: " << triangle.getSurface()
        << " Couleur: " << triangle.couleur;

    return os;
}
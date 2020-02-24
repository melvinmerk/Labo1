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
    os  << "Cercle = "
        << " Rayon: " << cercle.rayon
        << " Surface: " << cercle.getSurface()
        << " Couleur: " << cercle.couleur;
    return os;
}
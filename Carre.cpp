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
#include "Carre.h"

double Carre::getCote() const {
    return this->cote;
}

void Carre::setCote(double cote) {
    this->cote = cote;
}

Couleur Carre::getCouleur() const {
    return this->couleur;
}

void Carre::setCouleur(const Couleur &couleur) {
    this->couleur = couleur;
}

double Carre::getSurface() const {
    return this->cote * this->cote;
}

std::ostream& operator<<(std::ostream& os, const Carre& carre) {
    os  << "Carre = "
        << " Cote: " << carre.cote
        << " Surface: " << carre.getSurface()
        << " Couleur: " << carre.couleur;

    return os;
}
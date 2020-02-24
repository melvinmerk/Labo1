/*
-----------------------------------------------------------------------------------
Laboratoire : 01
Fichier     : Couleur.h
Groupe      : Labo_01_E
Auteur(s)   : Melvin Merk, Gabrielle Thurnherr
Date        : 24.02.2020

But         : Ce fichier contient la déclaration de la classe Couleur, comportant un constructeur par défaut
              défini et déclaré, ainsi que la déclaration de ses setters et getters simples.

Remarque(s) : -

Compilateur : MinGW-g++ 6.3.0
-----------------------------------------------------------------------------------
 */

#ifndef LABO1_COULEUR_H
#define LABO1_COULEUR_H

#include <iostream>
#include <vector>

enum class Colors {
    ROUGE, VERT, BLEU
};

class Couleur {
    friend std::ostream& operator<<(std::ostream& os, const Couleur& couleur);
public:
    // Constructeur par défaut
    Couleur() : color(Colors::ROUGE) {};

    Colors getCouleur() const;
    void setCouleur(Colors couleur);

private:
    static const std::vector<std::string> LISTE_COULEUR;
    Colors color;
};


#endif //LABO1_COULEUR_H

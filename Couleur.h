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
    Colors color;
    static const std::vector<std::string> LISTE_COULEUR;
};


#endif //LABO1_COULEUR_H

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

#include <iostream>

#include "Carre.h"
#include "Rectangle.h"
#include "Cercle.h"
#include "Triangle.h"

using namespace std;

int main() {

    Couleur couleur;
    couleur.setCouleur(Colors::BLEU);

    Carre ca1;
    Carre ca2(5.0, couleur);
    cout << ca1 << endl << ca2 << endl;

    Rectangle r1;
    couleur.setCouleur(Colors::VERT);
    Rectangle r2(5, 3, couleur);
    cout << r1 << endl << r2 << endl;

    Cercle ce1;
    Cercle ce2(3, couleur);
    cout << ce1 << endl << ce2 << endl;
    couleur.setCouleur(Colors::ROUGE);
    ce2.setCouleur(couleur);

    Triangle t1;
    Triangle t2(6, 2, couleur);
    t2.setHauteur(4);
    cout << t1 << endl << t2 << endl;

    return EXIT_SUCCESS;
}

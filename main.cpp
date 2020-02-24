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
    Rectangle r2(5, 3, couleur);


    Cercle ce1;
    Cercle ce2(3, couleur);


    Triangle t1;
    Triangle t2(6, 2, couleur);


    return EXIT_SUCCESS;
}

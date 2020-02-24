#include <iostream>

#include "Carre.h"

using namespace std;

int main() {

    Couleur couleur;

    couleur.setCouleur(Colors::BLEU);

    Carre c1;
    Carre c2(5.0, couleur);

    cout << c1 << endl <<  c2 << endl;

    return EXIT_SUCCESS;
}


#ifndef LABO1_COULEUR_H
#define LABO1_COULEUR_H

#include <iostream>

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
};


#endif //LABO1_COULEUR_H

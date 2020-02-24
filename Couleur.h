
#ifndef LABO1_COULEUR_H
#define LABO1_COULEUR_H

#include <iostream>

class Couleur {
    friend std::ostream& operator<<(std::ostream& os, const Couleur& couleur);
public:
    // Constructeur par défaut
    Couleur() : color(Colors::ROUGE) {};

    enum class Colors { ROUGE, VERT, BLEU};

    Colors getCouleur() const;
    void setCouleur(const Colors& couleur);

private:
    Colors color;
};


#endif //LABO1_COULEUR_H

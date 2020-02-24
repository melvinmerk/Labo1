
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

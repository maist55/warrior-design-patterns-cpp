#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Guerriers.h"
using namespace std;

int main() {
    FabriqueConcrete fabrique;
    vector<shared_ptr<Guerrier>> guerriers;

    guerriers.push_back(fabrique.creerGuerrier("Chevalier"));
    guerriers.push_back(fabrique.creerGuerrier("Samourai"));
    guerriers.push_back(fabrique.creerGuerrier("Vikings"));
    guerriers.push_back(fabrique.creerGuerrier("Spartiate"));
    cout << "" << endl;
    cout << "Les moyens de combat de nos guerriers !" << endl;
    cout << "" << endl;
    for (auto& g : guerriers) {
        if (g) g->seBattre();
    }
    cout << "" << endl;
    cout << "Les moyens de deplacement de nos guerriers !" << endl;
    cout << "" << endl;
    for (auto& g : guerriers) {
        if (g) g->seDéplacer();
    }
    cout << "" << endl;
    cout << "Les activites de nos guerriers !" << endl;
    cout << "" << endl;
    for (auto& g : guerriers) {
        if (g) g->pratiquerActivité();
    }
    return 0;
}



#include "Guerriers.h"

void Épée::action() {
    cout << "Je tranche !" << endl;
}

void Katana::action() {
    cout << "Je transperce !" << endl;
}

void Hache::action() {
    cout << "Je coupe !" << endl;
}

void Marteau::action() {
    cout << "Je tape fort !" << endl;
}

void Cheval::action() {
    cout << " Je me deplace a cheval" << endl;
}

void Apied::action() {
    cout << " Je me deplace a pieds" << endl;
}

void Drakkar::action() {
    cout << "je me deplace en drakkar !" << endl;
}

void MarcheMilitaire::action() {
    cout << "Je pratique la marche militaire !" << endl;
}

void Entretien::action() {
    cout << "Jeffectue l entretien de mes epees !" << endl;
}

void Meditation::action() {
    cout << "Je medite et j etudie les textes ancestraux !" << endl;
}

void Lutte::action() {
    cout << "Je pratique la lutte et la calisthenie !" << endl;
}

void Offrande::action() {
    cout << "Je fais des offrandes a Odin !" << endl;
}

Chevalier::Chevalier() {
    arme = make_shared<Épée>();
    deplacement = make_shared<Cheval>();
    activite = make_shared<Entretien>();
}

void Chevalier::seBattre() {
    cout << "Le chevalier attaque : ";
    arme->action();
}

void Chevalier::seDéplacer() {
    cout << "Le chevalier se deplace : ";
    deplacement->action();
}

void Chevalier::pratiquerActivité() {
    cout << "Activite du chevalier : ";
    activite->action();
}

Samourai::Samourai() {
    arme = make_shared<Katana>();
    deplacement = make_shared<Apied>();
    activite = make_shared<Meditation>();
}

void Samourai::seBattre() {
    cout << "Le samourai attaque : ";
    arme->action();
}

void Samourai::seDéplacer() {
    cout << "Le Samourai se deplace : ";
    deplacement->action();
}

void Samourai::pratiquerActivité() {
    cout << "Activite du Samourai: ";
    activite->action();
}

Vikings::Vikings() {
    arme = make_shared<Hache>();
    deplacement = make_shared<Drakkar>();
    activite = make_shared<Offrande>();
}

void Vikings::seBattre() {
    cout << "Le viking attaque : ";
    arme->action();
}

void Vikings::seDéplacer() {
    cout << "Le Viking se deplace : ";
    deplacement->action();
}

void Vikings::pratiquerActivité() {
    cout << "Activite du Viking: ";
    activite->action();
}

Spartiate::Spartiate() {
    arme = make_shared<Marteau>();
    deplacement = make_shared<MarcheMilitaire>();
    activite = make_shared<Lutte>();
}

void Spartiate::seBattre() {
    cout << "Le spartiate attaque : ";
    arme->action();
}

void Spartiate::seDéplacer() {
    cout << "Le Spartiate se deplace : ";
    deplacement->action();
}

void Spartiate::pratiquerActivité() {
    cout << "Activite du Spartiate: ";
    activite->action();
}

shared_ptr<Guerrier> FabriqueConcrete::creerGuerrier(const string& type) {
    if (type == "Chevalier") return make_shared<Chevalier>();
    else if (type == "Samourai") return make_shared<Samourai>();
    else if (type == "Vikings") return make_shared<Vikings>();
    else if (type == "Spartiate") return make_shared<Spartiate>();
    else {
        cout << "Type de guerrier inconnu : " << type << endl;
        return nullptr;
    }
}
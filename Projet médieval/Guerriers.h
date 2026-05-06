#pragma once
#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Arme {
public:
    virtual void action() = 0;
    virtual ~Arme() = default;
};

class Épée : public Arme {
public:
    void action() override;
};

class Katana : public Arme {
public:
    void action() override;
};

class Hache : public Arme {
public:
    void action() override;
};

class Marteau : public Arme {
public:
    void action() override;
};

class Deplacement {
public:
    virtual void action() = 0;
    virtual ~Deplacement() = default;
};

class Cheval : public Deplacement {
public:
    void action() override;
};

class Apied : public Deplacement {
public:
    void action() override;
};

class Drakkar : public Deplacement {
public:
    void action() override;
};

class MarcheMilitaire : public Deplacement {
public:
    void action() override;
};

class Activite {
public:
    virtual void action() = 0;
    virtual ~Activite() = default;
};

class Entretien : public Activite {
public:
    void action() override;
};

class Meditation : public Activite {
public:
    void action() override;
};

class Lutte : public Activite {
public:
    void action() override;
};

class Offrande : public Activite {
public:
    void action() override;
};

class Guerrier {
public:
    virtual void seBattre() = 0;
    virtual void seDéplacer() = 0;
    virtual void pratiquerActivité() = 0;
    virtual ~Guerrier() = default;
};

class Chevalier : public Guerrier {
public:
    Chevalier();
    void seBattre() override;
    void seDéplacer() override;
    void pratiquerActivité() override;
private:
    shared_ptr<Arme> arme;
    shared_ptr<Deplacement> deplacement;
    shared_ptr<Activite> activite;
};

class Samourai : public Guerrier {
public:
    Samourai();
    void seBattre() override;
    void seDéplacer() override;
    void pratiquerActivité() override;
private:
    shared_ptr<Arme> arme;
    shared_ptr<Deplacement> deplacement;
    shared_ptr<Activite> activite;
};

class Vikings : public Guerrier {
public:
    Vikings();
    void seBattre() override;
    void seDéplacer() override;
    void pratiquerActivité() override;
private:
    shared_ptr<Arme> arme;
    shared_ptr<Deplacement> deplacement;
    shared_ptr<Activite> activite;
};

class Spartiate : public Guerrier {
public:
    Spartiate();
    void seBattre() override;
    void seDéplacer() override;
    void pratiquerActivité() override;
private:
    shared_ptr<Arme> arme;
    shared_ptr<Deplacement> deplacement;
    shared_ptr<Activite> activite;
};

class FabriqueAbstraite {
public:
    virtual shared_ptr<Guerrier> creerGuerrier(const string& type) = 0;
    virtual ~FabriqueAbstraite() = default;
};

class FabriqueConcrete : public FabriqueAbstraite {
public:
    shared_ptr<Guerrier> creerGuerrier(const string& type) override;
};


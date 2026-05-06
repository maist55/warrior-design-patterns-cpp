# Warrior Design Patterns C++

Projet C++ démontrant l’utilisation de la programmation orientée objet et de patrons de conception à travers un système de guerriers, d’armes, de déplacements et d’activités.

## Description

Ce projet modélise différents types de guerriers historiques ou fictifs, chacun ayant une arme, un mode de déplacement et une activité associée.

Les guerriers disponibles sont :

- `Chevalier`
- `Samourai`
- `Vikings`
- `Spartiate`

Chaque guerrier possède des comportements propres :

- une façon de se battre ;
- une façon de se déplacer ;
- une activité spécifique.

Le projet utilise une fabrique pour créer dynamiquement des guerriers à partir d’un type donné.

## Fonctionnalités

- Création de différents types de guerriers :
  - chevalier ;
  - samouraï ;
  - viking ;
  - spartiate.

- Utilisation de plusieurs armes :
  - épée ;
  - katana ;
  - hache ;
  - marteau.

- Utilisation de plusieurs modes de déplacement :
  - cheval ;
  - à pied ;
  - drakkar ;
  - marche militaire.

- Utilisation de plusieurs activités :
  - entretien des épées ;
  - méditation ;
  - lutte ;
  - offrande à Odin.

- Création des guerriers avec une fabrique :
  - `FabriqueConcrete`.

- Utilisation du polymorphisme avec :
  - `std::shared_ptr<Guerrier>`.

## Concepts utilisés

Ce projet met en pratique plusieurs notions importantes en C++ :

- programmation orientée objet ;
- classes abstraites ;
- héritage ;
- polymorphisme ;
- composition ;
- méthodes virtuelles ;
- pointeurs intelligents ;
- `std::shared_ptr`;
- `std::make_shared`;
- séparation du code en fichiers `.h` et `.cpp`.

## Patrons de conception utilisés

### Strategy Pattern

Le projet utilise une logique proche du patron **Stratégie**.

Les comportements des guerriers sont représentés par des classes dérivées de `Action`.

Exemples d’actions :

```text
Épée
Katana
Hache
Marteau
Cheval
Apied
Drakkar
MarcheMilitaire
Entretien
Meditation
Lutte
Offrande

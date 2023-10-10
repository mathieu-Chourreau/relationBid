/**
 * @file Individu.h
 * @author Philipe Lopisteguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief cette classe definit un Individu par un nom, un prenom et une Voiture
 * @details au dela de representer un individu par son nom et son prenom, la classe Individu permet egalement de renseigner la Voiture 
 * qu'il conduit.
 * 
 * La Voiture associe a l'Individu est representée par un poiteur vers un objet Voiture qui peu etre a nu si l'Individu. 
 * 
 * @warning un individu ne peut etre associer a au plus une voiture
 */
class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;   
    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom; 
    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu à partir de son nom ( 1er parametre ) et son prenom ( deuxieme parametre ) 
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Detruit un objet Individu à partir de son nom ( 1er parametre ) et son prenom ( deuxieme parametre ) 
     * 
     */
    ~Individu();

    /**
     * @brief affiche l'entite de l'individu 
     * 
     * @return une chaine sous la forme nom, prenom  
     */
    string toString(); 
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief definit une Voiture consuit par un Individu
     * 
     * @param in voiture poiteur vers l'objet Voiture conduit par l'Individu
     * 
     * @bug un espace en trop entre nom est prenom
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H
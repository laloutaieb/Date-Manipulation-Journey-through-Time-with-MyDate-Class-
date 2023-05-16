#include "MyDate.h"
# include"MyDate.h"
# include<iostream>
using namespace std;
MyDate::MyDate(int a, int b, int c) //constructor classic
{
	jour = a; 
	moi = b; 
	année = c; 
	if (a < 1 || a>30)
	{
		cout << "Error Day" << endl;
		a = 1; 
	}
	if (b < 1 || b>12)
	{
		cout << "Erro month" << endl; 
		b = 1; 
	}
	if (c < 1920)
	{
		cout << "Erro year" << endl;
		c = 1920; 
	}
}

MyDate::MyDate(const MyDate& a)
{
	jour = a.jour; 
	moi = a.moi; 
	année = a.année; 
}

void MyDate::setDate(int a, int b, int c)
{
	if (a < 1 || a>30 || b < 1 || b>12 || c < 1920) 
		return; 
	jour = a; 
	moi = b; 
	année = c; 
}

void MyDate::print()
{
	cout << jour << "/" << moi << "/" << année << endl; // pas compris la parenthèse 
}

MyDate MyDate::operator=(const MyDate& a)
{
	// est qu'il faut crée l'objet dans l'operateur ou bien c'est comme avec 
	// le constructor, ou bien il est ecrit juste avant et il n'a pas besoin 
	jour = a.jour; 
	moi = a.moi; 
	année = a.année; 
	return *this; // c'est la solution a la question du haut; 
	/*étant donne que je n'ai pas */
}

MyDate MyDate::operator++() // pas presiser si on fait des mois de 30 29 31 etc.. 
{
   /*axiome : les mois on 30 jours pille peux importe le moi et peux importe bixetyle ou pas*/
	jour++; 
	if (jour>30)
	{
		jour = 1; 
		moi++; 
	}
	if (moi > 12)
	{
		moi = 1;
		année++;
	}
}

MyDate MyDate::operator>(MyDate a)
{
	if (année > a.année)
		return true;
	else if (année == a.année && moi > a.moi)
		return true;
	else if (année == a.année && moi == a.moi && jour > a.jour)
		return true;
	else
		return false; 
}

MyDate MyDate::operator<(MyDate a)
{
		if (année < a.année)
			return true;
		else if (année == a.année && moi < a.moi)
			return true;
		else if (année == a.année && moi == a.moi && jour < a.jour)
			return true;
		else
			return false;
}

MyDate MyDate::operator==(MyDate b)
{ 
	if (jour == b.jour && moi == b.moi && année == b.année)
		return true;
	else
		return false; 
}



 /*pas compris la difference entre les deux ++ mais 
 de ce que je me rappelle il met un x dans les argument 
 pour les differencirer et ca permet mais pas compris 
dans le code de moshe c'est quoi le temp(*this) */

/*Dans ce contexte, temp(*this) crée une copie de l'
objet actuel (*this) de la classe MyDate en utilisant 
l'opérateur de copie de la classe. Cette copie est stockée
dans une variable temporaire temp, qui est retournée à la fin de la méthode.
L'opérateur de post-incrémentation est défini pour la classe
MyDate et permet d'ajouter un jour à la date actuelle. 
La méthode operator++(int x) est une surcharge de l'opérateur
de post-incrémentation qui prend un paramètre inutilisé int x.
La méthode commence par créer une copie de l'objet actuel en
utilisant temp(*this). Ensuite, elle vérifie si la date 
actuelle correspond au dernier jour de l'année (31 décembre).
Si c'est le cas, elle réinitialise la date à 1er janvier de 
l'année suivante. Sinon, si la date est le dernier jour
d'un mois, elle avance le mois et réinitialise le jour à 1. 
Si la date n'est ni le dernier jour de l'année ni le dernier
jour d'un mois, elle avance simplement le jour.
Enfin, la méthode retourne la copie de l'objet initial avant
l'incrémentation, stockée dans la variable temporaire temp.*/












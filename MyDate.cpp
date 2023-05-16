#include "MyDate.h"
# include"MyDate.h"
# include<iostream>
using namespace std;
MyDate::MyDate(int a, int b, int c) //constructor classic
{
	jour = a; 
	moi = b; 
	ann�e = c; 
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
	ann�e = a.ann�e; 
}

void MyDate::setDate(int a, int b, int c)
{
	if (a < 1 || a>30 || b < 1 || b>12 || c < 1920) 
		return; 
	jour = a; 
	moi = b; 
	ann�e = c; 
}

void MyDate::print()
{
	cout << jour << "/" << moi << "/" << ann�e << endl; // pas compris la parenth�se 
}

MyDate MyDate::operator=(const MyDate& a)
{
	// est qu'il faut cr�e l'objet dans l'operateur ou bien c'est comme avec 
	// le constructor, ou bien il est ecrit juste avant et il n'a pas besoin 
	jour = a.jour; 
	moi = a.moi; 
	ann�e = a.ann�e; 
	return *this; // c'est la solution a la question du haut; 
	/*�tant donne que je n'ai pas */
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
		ann�e++;
	}
}

MyDate MyDate::operator>(MyDate a)
{
	if (ann�e > a.ann�e)
		return true;
	else if (ann�e == a.ann�e && moi > a.moi)
		return true;
	else if (ann�e == a.ann�e && moi == a.moi && jour > a.jour)
		return true;
	else
		return false; 
}

MyDate MyDate::operator<(MyDate a)
{
		if (ann�e < a.ann�e)
			return true;
		else if (ann�e == a.ann�e && moi < a.moi)
			return true;
		else if (ann�e == a.ann�e && moi == a.moi && jour < a.jour)
			return true;
		else
			return false;
}

MyDate MyDate::operator==(MyDate b)
{ 
	if (jour == b.jour && moi == b.moi && ann�e == b.ann�e)
		return true;
	else
		return false; 
}



 /*pas compris la difference entre les deux ++ mais 
 de ce que je me rappelle il met un x dans les argument 
 pour les differencirer et ca permet mais pas compris 
dans le code de moshe c'est quoi le temp(*this) */

/*Dans ce contexte, temp(*this) cr�e une copie de l'
objet actuel (*this) de la classe MyDate en utilisant 
l'op�rateur de copie de la classe. Cette copie est stock�e
dans une variable temporaire temp, qui est retourn�e � la fin de la m�thode.
L'op�rateur de post-incr�mentation est d�fini pour la classe
MyDate et permet d'ajouter un jour � la date actuelle. 
La m�thode operator++(int x) est une surcharge de l'op�rateur
de post-incr�mentation qui prend un param�tre inutilis� int x.
La m�thode commence par cr�er une copie de l'objet actuel en
utilisant temp(*this). Ensuite, elle v�rifie si la date 
actuelle correspond au dernier jour de l'ann�e (31 d�cembre).
Si c'est le cas, elle r�initialise la date � 1er janvier de 
l'ann�e suivante. Sinon, si la date est le dernier jour
d'un mois, elle avance le mois et r�initialise le jour � 1. 
Si la date n'est ni le dernier jour de l'ann�e ni le dernier
jour d'un mois, elle avance simplement le jour.
Enfin, la m�thode retourne la copie de l'objet initial avant
l'incr�mentation, stock�e dans la variable temporaire temp.*/












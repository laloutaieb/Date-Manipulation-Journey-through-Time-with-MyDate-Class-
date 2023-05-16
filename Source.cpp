# include"MyDate.h"
# include"MyDate.h"
# include<iostream>
using namespace std;
enum OPERRATOR { EXIT, SET_DATE, ADD_PRE, ADD_POST, PLACEMENT,
	SUPERIOR, INFERIOR, EQUAL };


int main()
{
	cout << "Enter a date"<< endl;
	MyDate x;
	char junk; // c'est la technique pour rentrer un caractere dans la valeur
	int a = 0; 
	int b = 0;
	int c = 0;
	int code = 0; 
	cin >> a >> junk >> b >> junk >> c;  
	MyDate date1(a, b, c);// interer du constructor c'est que j'ai pas besoin de le precre
	MyDate date2, date3; 
	cout << "Enter a code" << endl;
	cin >> code; 

	while (code != EXIT) // 
	{
		switch (code)
		{
		case SET_DATE: // 1  
			cout << "Enter a date" << endl; 
			cin >> a >> junk >> b >> junk >> c;
			date1.setDate(a, b, c); 
			date1.print(); 
			break; 
		case ADD_PRE: // 2 
			date2 = ++date1;
			date1.print(); cout << endl;
			date2.print(); cout << endl;
			break;
		case ADD_POST: // 3
			//date2 = date1++;
			date1.print(); cout << endl;
			date2.print(); cout << endl;
			break;
		case PLACEMENT: // 4 
			cout << "Enter a date" << endl; 
			cin >> a >> junk >> b >> junk >> c;
			date2.setDate(a, b, c);
			date1 = date2; 
			date1.print(); 

		case SUPERIOR: // 5 
			cout << "Enter a date" << endl;
			cin >> a >> junk >> b >> junk >> c;
			date2.setDate(a, b, c);
			date1.print(); cout << ">"; date2.print(); 
			if (date1 > date2)
				cout << ":true" << endl;
			else
				cout << ":false" << endl; 

		case INFERIOR: // 6
			cout << "Enter a date" << endl;
			cin >> a >> junk >> b >> junk >> c;
			date2.setDate(a, b, c);
			date1.print(); cout << "<"; date2.print();
			if (date1 < date2)
				cout << ":true" << endl;
			else
				cout << ":false" << endl;
		case EQUAL: // 7 
			cout << "Enter a date" << endl;
			cin >> a >> junk >> b >> junk >> c;
			date2.setDate(a, b, c);
			date1.print(); cout << "=="; date2.print();
			if (date1 == date2)
				cout << ":true" << endl;
			else
				cout << ":false" << endl;

		}
	}
	
	return 0;

}

/*
 ----- ENUM -----
important de penser a faire un ENUM des que l'on a 
a un systeme avec plusieur code et plusieur option directment 
cree le enum en haut de page et proceder a l'incrmenation
L'écriture en majuscules à l'intérieur des parenthèses 
lors de la définition d'une énumération en C++ n'est pas
obligatoire, mais c'est une convention courante pour distinguer 
les énumérés des autres identificateurs dans le code.


------ CREATION DOBJET ----- 
La question que je me pose a chaque fois c'est comment 
je dois créé un objet quand comment quand je rentre de donnder dedant 
par exemple dans le switch dans le prermier cas; 

------ FONCTION ------ 
utilise fonction forcement cree objet avant 
forcement nommer avec un point l'objet et la fonction : date1.fonction()
pas oublier les parenthese meme si il n'y pas d'argmument 


*/




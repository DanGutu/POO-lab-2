#include <iostream>
#include <queue>
#include <cstdlib>
#include<conio.h>
#include<stdlib.h>
using namespace std;

#define M 10

//Clasa coada

class  Queue
{
public:
	int tab[M];// staocarea elementelor in tabel
	int nr_elem_Max;//numarul maxim  de elemente
	int prim_Elem;//primul element al cozii
	int ult_Elem;//ultimul element
	int k; // numarul de elemente din coada

int Marime() {
		return k;
	}
bool Full() {
		return (Marime() == nr_elem_Max);
	}
public:
	Queue() {
		prim_Elem = 0;
		ult_Elem = 0;
	}
public:
	Queue( int prim, int u) {
		prim_Elem = prim;
		ult_Elem = u;
	}
		//Citirea datelor de la tastatura
public:	void
	Push_Queue() {
		if (ult_Elem == M)
			cout << "\n\tNumarul maxim a fost atins!";
		else {
			cout << "\n\tIntroduceti vaoloarea : ";
			cin >> nr_elem_Max;
			cout << "\n\tPozitia : " << ult_Elem + 1 << " , Valoarea  : " << nr_elem_Max;
			tab[ult_Elem++] = nr_elem_Max;
		}
}
	  // functia de afisare a datelor
public:	 void
	Display() {
		  cout << "\n\tMarimea : " << (ult_Elem -prim_Elem);
		  for (int i = nr_elem_Max; i < ult_Elem; i++)
			  cout << "\n--Elementul : " << i << " , Valoare  : " << tab[i];
	  }
public:	 void
	 PoP_Queue() {
	if (prim_Elem == ult_Elem)
		cout << "\n\tCoada este fara elemente!";
	else {
		cout << "\n\tPozitia : " << prim_Elem + 1 << " , Valoarea inlaturata  :" << tab[prim_Elem];
		prim_Elem++;
	}
}
};

int main() {
	queue <int> q;
	Queue Q;
	int m;//numarul de elemente in coada
	//Coada utilizind biblioteca
	cout << "\n\t---------------------------------------------";
	cout << "\n\t----Problema Coada Default Bibioteca----";
	cout << "\n\n\t---Afisarea cozii---"<<endl;
	cout << "\n\tIntroduceti numarul de elemente:";
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cout << "\tElemetele:"<<i<<endl;
		q.push(i);//adaugarea elem
	}
	cout << "\n\tMarimea cozii:" << q.size() << endl;
	cout << "\n\tPrimul element: " << q.front() << endl;
	cout << "\n\tUltimul element: " << q.back() << endl;
	q.pop(); //eliminarea
	cout << "\n\tMarimea cozii finale:" << q.size() << endl;
	cout << "\n\t---------------------------------------------";
	cout << "\n\t----Problema Coada prin Clasa----";
	//Coada prin clasa 
	Q.Push_Queue();
	Q.Display();
	Q.PoP_Queue();
}
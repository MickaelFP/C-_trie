#include <iostream>
#include <ctime>

using namespace std;

/* TRI A BULLE */
void bubbleSort(int tab[10]) {
	for(int i = 9; i > 0; i--) {
		for(int j = 0; j <= (i - 1); j++) {
			if(tab[j + 1] < tab[j]) {

				int temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
				for (int k = 0; k < 10; k++) {
					cout << "|" << tab[k];
				}
				cout << "|" << endl;
			}
		}
	}
}

/* TRI PAR INSERTION */
void insertSort( int tab[10]) {
	for(int i = 1; i < 10; i++) {
		int temp = tab[i];
		int j = i;
			
		while(j > 0 && tab[j - 1] > temp) {
			tab[j] = tab[j - 1];
			j = j - 1;
		}
		tab[j] = temp;
	}
}

/* TRI PAR SÉLECTION */
Void selectSort(int tab[10]) {
	for(int i = 0; i < 8; i++) {
		int min = i;
		for(int j = 1; j < 9; j++) {
			if(tab[j] < tab[min]) {
				min = j;
}
}
		if(min != i) {
			swap(tab[i], tab[min]);
		}
	}
}

/*
procédure tri_selection(tableau t)
n ← longueur(t) 
pour i de 0 à n - 2
min ← i       
pour j de i + 1 à n - 1
si t[j] < t[min], alors min ← j
fin pour
si min ≠ i, alors échanger t[i] et t[min]
fin pour
fin procédure
*/

int main() {

	srand(time(NULL));

	int tab[10] = { 0 };
	for(int i = 0; i < 10; i++) {
		bool alreadyIn = false;
		int random = rand() % 10 + 1;
		for (int j = 0; j < 10; j++) {
			if (random == tab[j]) {
				alreadyIn = true;
				break;
			}
		}
		if (alreadyIn) i--;
		else tab[i] = random;
	}

	for (int i = 0; i < 10; i++) {
		cout << "tab[" << i << "] = " << tab[i] << endl;
	}

	cout << "BUBBLE SORT" << endl;
	bubbleSort(tab);

	/*for (int i = 0; i < 10; i++) {
		cout << "tab[" << i << "] = " << tab[i] << endl;
	}*/
	
	return 0;
}

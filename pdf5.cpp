//#include <iostream> 
//using namespace std;
//int main() {  //kod 05_02
//    const int tableSize = 10;
//    int tab[tableSize];
//    for (int i = 0; i < tableSize; i++) {
//        tab[i] = i; //przypisanie i'temu elementowi tablicy wartosci i
//        cout << tab[i] << endl;
//    }
//    return 0;
//}



//#include <iostream> 
//using namespace std;
//int main() { //kod 05_03
//    const int tableSize = 10;
//    int tab[tableSize] = { 0 };
//    for (int i = 0; i < tableSize; i++)
//        cout << tab[i] << "    ";
//
//    cout << endl;
//    int tab2[tableSize] = { 99, 88 };
//    for (int i = 0; i < tableSize; i++)
//        cout << tab2[i] << "   ";
//
//    cout << endl;
//    int tab3[tableSize] = { 99, 88, 77, 66, 55, 44, 33, 22, 11, 11 };
//    for (int i = 0; i < tableSize; i++)
//        cout << tab3[i] << "   ";
//}



// Zadanie 1

//#include <iostream>
//using namespace std;
//
//int main() {
//    const int tabsize = 10;
//    int liczby[tabsize];
//
//    cout << "Podaj 10 liczb \n";
//    for (int i = 0; i < tabsize; ++i) {
//        cout << "Liczba " << i + 1 << ": ";
//        cin >> liczby[i];
//    }
//
//    cout << "\n odwrotna" << endl;
//    for (int i = tabsize - 1; i >= 0; --i) {
//        cout << liczby[i] << " ";
//    }
//
//    return 0;
//}


// Tablice dynamiczne

//#include <iostream> 
//using namespace std;
//int main() { //kod 05_05
//    int n;
//    cout << "Podaj wielkosc tablicy: ";
//    cin >> n;
//    int* table = new int[n];
//    for (int i = 0; i < n; i++) {
//        table[i] = i;
//        cout << table[i] << endl;
//    }
//    return 0;
//}






// Zadanie 2


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int tabsize;
//    cout << "podaj dlugosc: ";
//    cin >> tabsize;
//
//    int* tab = new int[tabsize];
//    tab[0] = 0;
//    tab[1] = 1;
//
//    for (int i = 2; i < tabsize; ++i) {
//        tab[i] = tab[i - 1] + tab[i - 2];
//    }
//    cout << "Ciag Fibonacciego:" << endl;
//    for (int i = 0; i < tabsize; ++i) {
//        cout << tab[i] << " ";
//    }
//    cout << endl;
//}

// Zadanie 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	const int tabsize = 10;
	int tab[tabsize];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{

		int losowa = rand() % 101;
		cout << "liczba: " << i + 1 << "\t" << losowa << endl; 
		tab[i] = losowa;
	}
	cout << "========================================= \n";

	float suma = 0;
	for (int i = 0; i < tabsize; ++i) {
		suma += tab[i];
	}
	double sa = suma / tabsize;
	cout << "\n" << sa << endl;
	cout << "=================================== \n";
	int mniejsze = 0;
	for (int i = 0; i < tabsize; ++i) {
		if (tab[i] < sa)
			mniejsze++;
	}
	cout << mniejsze << endl;

	cout << "=============== min i max =============\n" ;

	int min = tab[0];
	int max = tab[0];
	for (int i = 1; i < tabsize; ++i) {
		if (tab[i] < min) min = tab[i];
		if (tab[i] > max) max = tab[i];
	}
	cout << "Najmniejszy element: " << min << endl;
	cout << "Najwiekszy element: " << max << endl;
	return 0;
}
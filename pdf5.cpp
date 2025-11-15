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

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	const int tabsize = 10;
//	int tab[tabsize];
//	srand(time(0));
//	for (int i = 0; i < 10; i++)
//	{
//
//		int losowa = rand() % 101;
//		cout << "liczba: " << i + 1 << "\t" << losowa << endl; 
//		tab[i] = losowa;
//	}
//	cout << "========================================= \n";
//
//	float suma = 0;
//	for (int i = 0; i < tabsize; ++i) {
//		suma += tab[i];
//	}
//	double sa = suma / tabsize;
//	cout << "\n" << sa << endl;
//	cout << "=================================== \n";
//	int mniejsze = 0;
//	for (int i = 0; i < tabsize; ++i) {
//		if (tab[i] < sa)
//			mniejsze++;
//	}
//	cout << mniejsze << endl;
//
//	cout << "=============== min i max =============\n" ;
//
//	int min = tab[0];
//	int max = tab[0];
//	for (int i = 1; i < tabsize; ++i) {
//		if (tab[i] < min) min = tab[i];
//		if (tab[i] > max) max = tab[i];
//	}
//	cout << "Najmniejszy element: " << min << endl;
//	cout << "Najwiekszy element: " << max << endl;
//	return 0;
//}


//Zadanie 4

//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows, cols;
//
//    cout << "Podaj liczbe wierszy: ";
//    cin >> rows;
//
//    cout << "Podaj liczbe kolumn: ";
//    cin >> cols;
//
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        matrix[i] = new int[cols];
//    }
//
//    cout << "\nWprowadz wartosci do macierzy:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << "Element [" << i << "][" << j << "]: ";
//            cin >> matrix[i][j];
//        }
//    }
//
//    cout << "\nTwoja macierz:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

//Zadanie 5

//#include <iostream>
//using namespace std;
//
//int main() {
//    const int SIZE = 10;
//    double tab[SIZE];
//    int n;
//
//    cout << "Ile liczb chcesz wprowadzic (0-10)? ";
//    cin >> n;
//
//    // Sprawdzenie zakresu
//    if (n < 0 || n > 10) {
//        cout << "Blad: n musi byc w zakresie 0-10.\n";
//        return 0;
//    }
//
//    // Wprowadzanie liczb
//    cout << "Wprowadz " << n << " liczb:\n";
//    for (int i = 0; i < n; i++) {
//        cin >> tab[i];
//    }
//
//    // Uzupelnianie tablicy zerami
//    for (int i = n; i < SIZE; i++) {
//        tab[i] = 0.0;
//    }
//
//    // Obliczanie min, max, średniej
//    double min = tab[0];
//    double max = tab[0];
//    double suma = 0.0;
//
//    for (int i = 0; i < SIZE; i++) {
//        if (tab[i] < min) min = tab[i];
//        if (tab[i] > max) max = tab[i];
//        suma += tab[i];
//    }
//
//    double srednia = suma / SIZE;
//
//    cout << "\nWyniki:\n";
//    cout << "Srednia: " << srednia << endl;
//    cout << "Minimum: " << min << endl;
//    cout << "Maksimum: " << max << endl;
//
//    return 0;
//}


// Zadanie 6 

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main() {
//    const int SIZE = 10;
//    int tab[SIZE];
//
//    srand(time(0));
//
//    cout << "Wylosowane liczby w tablicy:\n";
//    for (int i = 0; i < SIZE; i++) {
//        tab[i] = rand() % 11;
//        cout << tab[i] << " ";
//    }
//
//    int lucky = rand() % 11;
//    cout << "\n\nSzczesliwa liczba: " << lucky << endl;
//
//    int count = 0;
//    for (int i = 0; i < SIZE; i++) {
//        if (tab[i] == lucky) {
//            count++;
//        }
//    }
//
//    cout << "Liczba wystapien szczesliwej liczby: " << count << endl;
//
//    return 0;
//}

// Zadanie 7

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Podaj wymiar macierzy kwadratowych n (n > 0): ";
//    if (!(cin >> n) || n <= 0) {
//        cout << "Niepoprawny wymiar.\n";
//        return 1;
//    }
//
//    // Alokacja dynamiczna tablicy wskaźników dla trzech macierzy
//    int** A = new int* [n];
//    int** B = new int* [n];
//    int** C = new int* [n];
//    for (int i = 0; i < n; ++i) {
//        A[i] = new int[n];
//        B[i] = new int[n];
//        C[i] = new int[n];
//    }
//
//    // Wczytywanie macierzy A
//    cout << "Wprowadz elementy macierzy A (" << n << "x" << n << "):\n";
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << "A[" << i << "][" << j << "]: ";
//            cin >> A[i][j];
//        }
//    }
//
//    // Wczytywanie macierzy B
//    cout << "Wprowadz elementy macierzy B (" << n << "x" << n << "):\n";
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << "B[" << i << "][" << j << "]: ";
//            cin >> B[i][j];
//        }
//    }
//
//    // Dodawanie macierzy: C = A + B
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            C[i][j] = A[i][j] + B[i][j];
//        }
//    }
//
//    // Wyświetlanie wyniku
//    cout << "\nMacierz wynikowa C = A + B:\n";
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << C[i][j] << " ";
//        }
//        cout << "\n";
//    }
//
//    // Zwolnienie pamięci
//    for (int i = 0; i < n; ++i) {
//        delete[] A[i];
//        delete[] B[i];
//        delete[] C[i];
//    }
//    delete[] A;
//    delete[] B;
//    delete[] C;
//
//    return 0;
//}

// Zadanie 8

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "podaj wymiar macierzy: ";
//	cin >> n;
//	if (n <= 0)
//	{
//		cout << "bledny wymiar";
//	}
//	int** A = new int* [n];
//	int** B = new int* [n];
//	int** C = new int* [n];
//	for (int i = 0; i < n; i++)
//	{
//		A[i] = new int[n];
//		B[i] = new int[n];
//		C[i] = new int[n];
//	}
//	cout << "Wprowadz elementy macierzy A (" << n << "x" << n << "):\n";
//	    for (int i = 0; i < n; ++i) {
//	        for (int j = 0; j < n; ++j) {
//	            cout << "A[" << i << "][" << j << "]: ";
//	            cin >> A[i][j];
//	        }
//	    }
//
//		cout << "wprowadz elementry macierzy B ( " << n << "x" << n << "): \n";
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cout << "B[" << i << "][" << j << "]: ";
//				cin >> B[i][j];
//			}
//		}
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				C[i][j] = A[i][j] * B[i][j];
//			}
//		}
//		cout << "Wynik: \n";
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cout << C[i][j] << " ";
//			}
//		}
//		return 0;
//}

// Zadanie 9 

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Podaj wymiar macierzy kwadratowej: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "Bledny wymiar!" << endl;
//        return 1;
//    }
//
//    int** A = new int* [n];
//    for (int i = 0; i < n; i++) {
//        A[i] = new int[n];
//    }
//
//    cout << "Wprowadz elementy macierzy:\n";
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << "A[" << i << "][" << j << "]: ";
//            cin >> A[i][j];
//        }
//    }
//
//    int suma = 0;
//    for (int i = 0; i < n; i++) {
//        suma += A[i][i]; 
//    }
//
//    cout << "Suma elementow na glownej przekatnej: " << suma << endl;
//
//    for (int i = 0; i < n; i++) {
//        delete[] A[i];
//    }
//    delete[] A;
//
//    return 0;
//}

// Zadanie 10 

//#include <iostream>
//using namespace std;
//
//int main() {
//    const int SIZE = 10;
//    int tab[SIZE];
//
//    cout << "Wprowadz 10 liczb calkowitych:\n";
//    for (int i = 0; i < SIZE; i++) {
//        cout << "tab[" << i << "]: ";
//        cin >> tab[i];
//    }
//
//    for (int i = 0; i < SIZE - 1; i++) {
//        for (int j = 0; j < SIZE - i - 1; j++) {
//            if (tab[j] > tab[j + 1]) {
//                int temp = tab[j];
//                tab[j] = tab[j + 1];
//                tab[j + 1] = temp;
//            }
//        }
//    }
//    cout << "\nTablica po posortowaniu rosnaco:\n";
//    for (int i = 0; i < SIZE; i++) {
//        cout << tab[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

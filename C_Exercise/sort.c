#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define RANGE 100

/* stampa un vettore di interi di dimensione size */
void print_vect ( int vect [], int size );

/* assegna valori casuali agli elementi del vettore */ 
void randomize ( int vect [], int size, int range );

/* scambia il valore puntato da e1 con il valore puntato da e2 */ 
void swap (int *  e1, int * e2);

/* 
	 ordina un vettore di interi di dimensione size per valori non decrescenti
	 utilizzando l'algoritmo Selection Sort
 */
void selection_sort ( int * vect, int size );

/* 
	 ordina un vettore di interi di dimensione size per valori non decrescenti
	 utilizzando l'algoritmo Insertion Sort
 */
void insertion_sort ( int * vect, int size );

/* 
	 ordina un vettore di interi di dimensione size per valori non decrescenti
	 utilizzando l'algoritmo Bubble Sort
 */
void bubble_sort( int * vect, int size );


int main() {
//	int vect [ SIZE ];
	int vect [] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i, seed;
	
	
	printf("Inserire il seed per il generatore di numeri casuali\n");
	scanf("%d", &seed);
	
	/* inizializzazione del generatore di numeri casuali */
	srand(seed);
	
	printf("Vettore generato casualmente:\n");
	randomize (vect, SIZE, RANGE);
	print_vect(vect, SIZE);

	printf("Vettore ordinato tramite selection_sort:\n");	
	selection_sort(vect, SIZE);
	print_vect(vect, SIZE);	
	
	printf("Vettore generato casualmente:\n");
	randomize (vect, SIZE, RANGE);
	print_vect(vect, SIZE);

	printf("Vettore ordinato tramite insertion_sort:\n");
	bubble_sort(vect, SIZE);
	print_vect(vect, SIZE);	
	
	printf("Vettore generato casualmente:\n");
	randomize (vect, SIZE, RANGE);
	print_vect(vect, SIZE);

	printf("Vettore ordinato tramite bubble_sort:\n");
	bubble_sort(vect, SIZE);
	print_vect(vect, SIZE);	
	
}

void print_vect(  int * vect, int size){
	static int i;
	
	for (i=0; i < size; i++){
				printf("%3d", vect [ i ]);
	}
	printf("\n");
}

void swap (int * e1, int * e2){
	static int t;
	t = *e1;
	*e1 = *e2;
	*e2 = t;
}

void randomize ( int vect [], int size, int range) {
	static int i;
	
	for(i=0; i < size; i++) {
		vect [ i ] = rand() % range;
	}
}

void selection_sort ( int vect [], int size) {
	int * find_min (int vect [], int size);
	
	int i, * min;
	
	for (i=0; i< size -1; i++) {
		min = find_min ((vect+i), size -i );
		if (min != vect + i) swap (min, vect+i);
	}
	
}

int * find_min (int vect [], int size) {
	int i, * min;
	min = vect;
	
	for (i = 0; i < size; i++) {
		if (*min > vect[i]) min = vect+i;
	}
	return min;
}

void insertion_sort ( int * vect, int size ) {
	
	int i, j, value;
	
	for (i = 1; i < size ; i++) {
		value = vect[i];
		j = i-1;
		while ((j >= 0) && (vect[j] > value)) {
			vect[j + 1] = vect[j];
			j--;
		}
		vect[j+1] = value;
	}
}

void bubble_sort (int * vect, int size) {


	int pass, cell;
	
	for (pass = 1; pass < size; pass ++ ) {
		for (cell = 0; cell < size - pass; cell ++) {
			if (* (vect + cell) > vect [ cell+1 ])
				swap( & vect [cell], vect+cell+1);
		}
	}
	
}


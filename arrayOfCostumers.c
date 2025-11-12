#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	char name[50];
	char date;
	double value;
} Transaction;

typedef struct {
	char name[50];
	int id;
	double balance;
	Transaction history[10];
} Customer;


typedef Customer* PCostumer;

PCostumer NewCustomer() {
	return (PCostumer)calloc(1, sizeof(Customer));
}

void Cleanup(PCostumer* myArray, int size) {
	
	for (int i = 0; i < size; i++) {
		if (myArray[i] != NULL) {
			free(myArray[i]);
		}
	}
	free(myArray);
}

void StaticArrayExample() {

	Customer array1[10];
	array1[0].id = 1234;

	PCostumer array2 = (PCostumer)calloc(10, sizeof(Customer)); // allocate memory for 10 Customers
	array2[0].id = 1234;
	free(array2);

}

void DynamicArrayExample() {
	PCostumer* array3 = (PCostumer*)calloc(10, sizeof(PCostumer)); // allocate memory for 10 Customer pointers
	array3[0] = (PCostumer)calloc(1, sizeof(Customer));// allocate memory for 1 Customer for the first pointer
	array3[0]->id = 1234;
	array3[1] = (PCostumer)calloc(1, sizeof(Customer));
	array3[2] = (PCostumer)calloc(1, sizeof(Customer));
}

void PointerArrayExample() {
	PCostumer* array3 = (PCostumer*)calloc(10, sizeof(PCostumer));
	array3[0] = NewCustomer();
	array3[1] = NewCustomer();
	array3[2] = NewCustomer();

}

int main(void) {
	printf("=== Array of Customers: three representations ===\n");
	StaticArrayExample();
	DynamicArrayExample();
	PointerArrayExample();
}
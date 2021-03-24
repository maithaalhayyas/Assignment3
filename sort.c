#include <stdio.h>
#include <time.h>
#include <stdlib.h>



void sort(int *A, int array_size) {
int cur_elem, insert_index;
for (int cur_index = 1; cur_index < array_size; cur_index++) {
 cur_elem = *(A+cur_index);
 insert_index = cur_index - 1;

 while (insert_index >= 0 && cur_elem < *(A+insert_index)) {
 *(A+insert_index+1) = *(A+insert_index);
 insert_index -= 1;
 }
 *(A+insert_index+1) = cur_elem;
 }
}

int main() {

	srand(time(NULL));

	int n;
printf("Enter an integer n: ");
scanf("%d", &n);

int *array = malloc(n * sizeof(int));

for (int i=0; i<n; i++) {
 *(array+i) = rand() % 32000; // assigns random numbers
 }
#include <stdio.h>
#include <time.h>
#include <stdlib.h>



void sort(int *A, int array_size) {
int cur_elem, insert_index;
for (int cur_index = 1; cur_index < array_size; cur_index++) {
 cur_elem = *(A+cur_index);
 insert_index = cur_index - 1;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void op_double(int *a);
void op_reset(int *a);
void op_invert(int *a);
void applyTo(void (*func) (int *), int *tab, int size);


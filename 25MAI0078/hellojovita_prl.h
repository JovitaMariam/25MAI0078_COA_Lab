#include "stdio.h"
#include "omp.h"

void fn_hellojovita_prl() {

#pragma omp parallel
	printf("Hello Jovita Parallel\n");
}

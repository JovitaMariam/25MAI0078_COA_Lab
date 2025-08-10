#include <stdio.h>
#include "omp.h"
void fn_hellojovita_prl()
{
#pragma omp parallel
	{
		printf("Hello World from thread %d\n", omp_get_thread_num());
	}
}



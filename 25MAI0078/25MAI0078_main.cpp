//#include"stdio.h"
//#include "030_wsc_for_pp1.h"

//int main()
//{
	//fn_wsc_for_2constructs();
	//fn_wsc_for_1construct();
	//return 0;
//}

//#include"stdio.h"
//#include "031_wsc_for_num_square.h"

//int main()
//{
	//fn_num_square();
	//return 0;
//}

//#include <stdio.h>
//#include <omp.h>
//#include "mnudrvprg_020_runtime_environment_routines.h"

//int main() {
	//fn_mnudrvprg_020_runtime_environment_routines();
	//return 0;
//}

//#include "stdio.h"
//#include "omp.h"
//#include "mnudrvprg_030_for_worksharing_construct.h"

//int main() {

//	fn_mnudrvprg_030_for_worksharing_construct();


//	return 0;
//}

//#include<stdio.h>
//#include "mnudrvprg_020_runtime_environment_routines.h"
//int main() {
//	printf("Menu Driven Program");
//	fn_mnudrvprg_020_runtime_environment_routines();
//	return 0;
//}

#include <stdio.h>
#include "run_time_environment_routines.h"

int main() {
	fn_rter_omp_set_num_threads();
	fn_rter_omp_get_num_threads();
	fn_rter_omp_get_max_threads();
	fn_rter_omp_get_thread_num();
	fn_rter_omp_get_num_procs();
	fn_rter_omp_in_parallel();
	fn_rter_omp_set_dynamic();
	fn_rter_omp_get_dynamic();
	fn_rter_omp_set_nested();
	fn_rter_omp_get_nested();

	return 0;
}




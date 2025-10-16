//#include"stdio.h"
//#include "030_wsc_for_pp1.h"

//int main()
//{
	//fn_wsc_for_2constructs();
	//fn_wsc_for_1constructs();
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
//	fn_mnudrvprg_020_runtime_environment_routines();
//	return 0;
//}

//#include "stdio.h"
//#include "omp.h"
//#include "mnudrvprg_030_for_worksharing_construct.h"

//int main() {

	//fn_mnudrvprg_030_for_worksharing_construct();


	//return 0;
//}
//#include<stdio.h>
//#include "mnudrvprg_020_runtime_environment_routines.h"
//int main() {
	//printf("Menu Driven Program");
	//fn_mnudrvprg_020_runtime_environment_routines();
	//return 0;
//}


//#include"stdio.h"
//#include "040_wsc_calculations_pp1.h"
//#include "040_wsc_sections_pp1.h"

//int main()
//{
	//fn_calculator_add();
	//fn_calculator_subtractor();
	//return 0;
//}

//#include <stdio.h>
//#include "hellojovita_srl.h"
//#include "hellojovita_prl.h"

//int main()
//{
	//fn_hellojovita_srl();
	//fn_hellojovita_prl();
	//return 0;
//}

//#include<stdio.h>
//#include<omp.h>
//#include "mnudrvprg_010_parallel_construct.h"

//int main()
//{
	//fn_mnudrvprg_010_parallel_construct();
	//return 0;
//}

//#include<stdio.h>
//#include<omp.h>
//#include "run_time_environment_routines.h"
//int main()
//{
	//fn_rter_omp_set_num_threads(4);
	//fn_rter_omp_get_num_threads();
	//fn_rter_omp_get_max_threads();
	//fn_rter_omp_get_thread_num();
	//fn_rter_omp_get_num_procs();
	//fn_rter_omp_in_parallel();
	//fn_rter_omp_set_dynamic(1);
	//fn_rter_omp_get_dynamic();
	//fn_rter_omp_get_cancellation();
	//fn_rter_omp_set_nested(1);
	//fn_rter_omp_get_nested();
	//fn_rter_omp_set_schedule(4);
	//fn_rter_omp_get_schedule();
	//fn_rter_omp_get_thread_limit();
	//fn_rter_omp_set_max_active_levels(2);
	//fn_rter_omp_get_max_active_levels();
	//fn_rter_omp_get_level();
	//fn_rter_omp_get_ancestor_thread_num(0);
	//fn_rter_omp_get_team_size(0);
	//fn_rter_omp_get_active_level();
	//fn_rter_omp_in_final();
	//fn_rter_omp_get_proc_bind();
	//fn_rter_omp_set_default_device(0);
	//fn_rter_omp_get_default_device();
	//fn_rter_omp_get_num_devices();
	//fn_rter_omp_get_num_teams();
	//fn_rter_omp_get_team_num();
	//return 0;
//}

//#include <stdio.h>
//#include<omp.h>
//#include "031_wsc_for_num_square.h"

//int main() {
//	int choice;

//	do {
//		printf("\n==============================\n");
//		printf("Menu: Number Square using Work-Sharing Construct (OMP)\n");
//		printf("==============================\n");
//		printf("1. Serial Execution\n");
//		printf("2. Parallel Execution\n");
//		printf("3. Compare Execution Time, Speedup, and Efficiency\n");
//		printf("4. Exit\n");
//		printf("Enter your choice: ");
//		scanf_s("%d", &choice);

//		switch (choice) {
//		case 1:
//			fn_num_square_srl();
//			break;
//		case 2:
//			fn_num_square_prl();
//			break;
//		case 3:
//			fn_num_square_speedup_efficiency();
//			break;
//		case 4:
//			printf("Exiting program...\n");
//			break;
//		default:
//			printf("Invalid choice. Please enter 1–4.\n");
//		}
//	} while (choice != 4);

//	return 0;
//}

#include <stdio.h>
#include "050_Scheduling_Static.h"
#include "050_Scheduling_Dynamic.h"
#include "050_Scheduling_Guided.h"
int main()
{
	fn_default_Static_Scheduling();
	fn_static_01();
	fn_static_02();
	fn_default_Dynamic_Scheduling();
	fn_dynamic_01();
	fn_dynamic_02();
	fn_default_Guided_Scheduling();
	fn_guided_uneven();
	fn_guided_01();
	fn_guided_02();
	return 0;
}

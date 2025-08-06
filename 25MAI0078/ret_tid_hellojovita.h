#include <stdio.h>
#include <omp.h>

void fn_ret_tid_hellojovita_srl() {
    printf("Hello Jovita Printed by Thread Id : %d\n", omp_get_thread_num());
}

void fn_ret_tid_hellojovita_prl() {
#pragma omp parallel
    printf("Hello Jovita Printed by Thread Id : %d\n", omp_get_thread_num());
}
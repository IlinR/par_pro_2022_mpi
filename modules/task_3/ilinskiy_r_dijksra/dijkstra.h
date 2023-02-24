
#ifndef MODULES_TASK_3_ILINSKIY_R_DIJKSTRA_DIJKSTRA_H_
#define MODULES_TASK_3_ILINSKIY_R_DIJKSTRA_DIJKSTRA_H_
#include <mpi.h>

int* gen_matrix(int size, int procRank = 0);
bool check_eq(int* vec1, int* vec2, int size);
int* sequential(int* matrix, int size);
int* parallel(int* matrix, int size);

#endif 
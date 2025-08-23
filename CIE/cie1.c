// write an open mp program which launches a parrel region and it has each thread prints its id and  team size
#include <stdio.h>
#include <omp.h>
int main(){
#pragma omp parallel
{
    int thread_id = omp_get_thread_num();
    int team_size = omp_get_num_threads();
    printf("thread %d out of %d threads\n", thread_id, team_size);
}
 return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(810, "ones");
	int *B = create_one_dim_int(410, "ones");
	int **E = create_two_dim_int(660, 590, "ones");
	int **C = create_two_dim_int(680, 650, "ones");
	int **D = create_two_dim_int(390, 60, "ones");

	for (int a = 1; a < 410; a++)
	{
	  
	    B[a]=B[a-1]-A[a]*E[a][a];
	  
	    B[a]=48;
	}

    return 0;
}
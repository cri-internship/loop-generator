#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(30, "random");
	int *A = create_one_dim_int(190, "random");
	int **D = create_two_dim_int(500, 860, "random");
	int **C = create_two_dim_int(660, 860, "random");

	for (int a = 4; a < 190; a++)
	{
	  
	    D[a][a]=D[a-4][a-1]+45;
	  
	    C[a][a]=C[a+1][a]-A[a]*D[a][a]/B[a];
	  
	    int var_a=A[a]*4;
	    A[a]=24;
	  
	    D[a][a]=D[a+1][a+5]/C[a][a]*A[a];
	  
	    C[a][a]=D[a][a]*B[a]+A[a];
	  
	    int var_b=C[a][a]/15;
	    int var_c=C[a+3][a+5]/0;
	}

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(480, 850, "random");
	int **C = create_two_dim_int(140, 390, "random");
	int *D = create_one_dim_int(440, "random");
	int *A = create_one_dim_int(780, "random");

	for (int a = 4; a < 136; a++)
	{
	  
	    D[a]=D[a-4]-C[a][a]*A[a];
	  
	    C[a][a]=C[a][a+4]+B[a][a]/D[a];
	  
	    A[a]=A[a+1]/20;
	  
	    int var_a=C[a][a]-41;
	    int var_b=C[a-3][a]-10;
	}

    return 0;
}
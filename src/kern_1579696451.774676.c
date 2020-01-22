#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(370, "zeros");
	float **C = create_two_dim_float(110, 150, "zeros");
	float ***B = create_three_dim_float(500, 720, 120, "zeros");
	float **D = create_two_dim_float(600, 180, "zeros");

	for (int a = 3; a < 110; a++)
	{
	  
	    B[a][a][a]=B[a+2][a+5][a+5]/D[a][a]*C[a][a]+A[a];
	  
	    A[a]=A[a+5]-B[a][a][a]/D[a][a];
	  
	    D[a][a]=C[a][a]+D[a][a]*A[a];
	    C[a][a]=C[a-2][a-3]*D[a][a];
	}

    return 0;
}
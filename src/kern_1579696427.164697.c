#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(190, "ones");
	float *D = create_one_dim_float(570, "ones");
	float **C = create_two_dim_float(470, 250, "ones");
	float *A = create_one_dim_float(190, "ones");
	float *B = create_one_dim_float(460, "ones");

	for (int a = 4; a < 185; a++)
	{
	  
	    B[a]=B[a-4]*0.2;
	  
	    D[a]=D[a+3]+C[a][a]-E[a]/A[a]*B[a];
	  
	    C[a][a]=C[a+1][a+4]*0.281;
	  
	    A[a]=0.912;
	    A[a+5]=0.144;
	}

    return 0;
}
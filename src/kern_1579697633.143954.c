#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(580, "ones");
	float **B = create_two_dim_float(640, 100, "ones");
	float *D = create_one_dim_float(260, "ones");
	float *C = create_one_dim_float(760, "ones");
	float ***A = create_three_dim_float(750, 20, 430, "ones");

	for (int a = 2; a < 259; a++)
	{
	  
	    B[a][a]=B[a+4][a+3]*0.995;
	  
	    D[a]=D[a+1]-0.403;
	  
	    D[a]=B[a][a]*E[a]/A[a][a][a];
	  
	    E[a]=C[a]-D[a];
	    C[a]=C[a-2]+E[a]*B[a][a]-D[a];
	  
	    B[a][a]=C[a]*B[a][a]/D[a]-A[a][a][a]+E[a];
	}

    return 0;
}
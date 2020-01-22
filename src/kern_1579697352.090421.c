#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(440, "ones");
	double *A = create_one_dim_double(60, "ones");
	double ***C = create_three_dim_double(930, 480, 100, "ones");
	double *D = create_one_dim_double(150, "ones");
	double *B = create_one_dim_double(140, "ones");

	for (int a = 5; a < 57; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-1][a-2]*0.921;
	  
	    D[a]=D[a+5]-0.012;
	  
	    A[a]=A[a+3]+E[a]*B[a];
	}

    return 0;
}
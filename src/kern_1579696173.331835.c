#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(180, "ones");
	double *B = create_one_dim_double(570, "ones");
	double ***D = create_three_dim_double(390, 110, 740, "ones");
	double *E = create_one_dim_double(690, "ones");
	double **C = create_two_dim_double(260, 450, "ones");

	for (int a = 0; a < 259; a++)
	{
	  
	    B[a]=B[a+2]/A[a];
	  
	    D[a][a][a]=D[a+3][a+5][a+1]-0.229;
	  
	    C[a][a]=0.53;
	    C[a+1][a+1]=0.624;
	}

    return 0;
}
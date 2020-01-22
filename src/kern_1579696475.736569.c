#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(760, "ones");
	double ***B = create_three_dim_double(850, 790, 420, "ones");
	double **C = create_two_dim_double(60, 350, "ones");

	for (int a = 5; a < 55; a++)
	{
	  
	    A[a]=A[a-2]*C[a][a];
	  
	    C[a][a]=0.321;
	    C[a][a+3]=0.897;
	  
	    C[a][a]=B[a][a][a];
	  
	    C[a][a]=C[a][a]*A[a]/B[a][a][a];
	    A[a]=C[a-4][a-5]+A[a]*0.093;
	  
	    double var_a=B[a][a][a]+0.512;
	    double var_b=B[a+2][a][a+2]*0.352;
	}

    return 0;
}
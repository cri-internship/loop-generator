#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(860, "zeros");
	double *A = create_one_dim_double(640, "zeros");
	double ***D = create_three_dim_double(650, 40, 530, "zeros");
	double *B = create_one_dim_double(260, "zeros");

	for (int a = 5; a < 260; a++)
	{
	  
	    B[a]=B[a-1]*0.461;
	  
	    A[a]=D[a][a][a]*C[a]/B[a];
	    A[a+5]=D[a][a][a]-C[a];
	  
	    double var_a=D[a][a][a]/0.328;
	    double var_b=D[a][a-4][a-1]*0.468;
	  
	    double var_c=A[a]/0.208;
	    double var_d=A[a-5]/0.89;
	}

    return 0;
}
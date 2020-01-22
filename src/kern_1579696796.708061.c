#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(780, "zeros");
	double **B = create_two_dim_double(500, 720, "zeros");
	double **C = create_two_dim_double(350, 200, "zeros");

	for (int a = 5; a < 348; a++)
	{
	  
	    C[a][a]=0.977;
	    C[a-5][a-2]=0.786;
	  
	    A[a]=0.025;
	    A[a-4]=0.084;
	  
	    B[a][a]=0.789;
	    B[a-4][a-3]=C[a][a]/C[a][a];
	  
	    B[a][a]=A[a];
	  
	    double var_a=C[a][a]/0.725;
	    double var_b=C[a+2][a+1]-0.17;
	  
	    double var_c=A[a]-0.445;
	    double var_d=A[a-5]+0.285;
	}

    return 0;
}
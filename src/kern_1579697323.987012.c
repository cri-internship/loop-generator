#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(570, 440, "zeros");
	double *C = create_one_dim_double(80, "zeros");
	double ***B = create_three_dim_double(320, 490, 170, "zeros");

	for (int a = 5; a < 77; a++)
	{
	  
	    A[a][a]=A[a-3][a]/0.417;
	  
	    B[a][a][a]=B[a-1][a-1][a-4]+0.451;
	  
	    B[a][a][a]=C[a]/A[a][a]*0.137;
	    C[a]=B[a][a][a]/A[a][a];
	  
	    A[a][a]=C[a]/B[a][a][a];
	  
	    double var_a=A[a][a]+0.511;
	    double var_b=A[a-5][a-3]*0.46;
	  
	    double var_c=B[a][a][a]+0.933;
	    double var_d=B[a+1][a+2][a]-0.065;
	  
	    double var_e=C[a]*0.826;
	    double var_f=C[a+3]*0.452;
	}

    return 0;
}
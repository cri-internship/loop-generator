#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(600, "ones");
	double ***B = create_three_dim_double(720, 300, 860, "ones");
	double ***D = create_three_dim_double(260, 290, 600, "ones");
	double *A = create_one_dim_double(100, "ones");

	for (int a = 5; a < 99; a++)
	{
	  
	    A[a]=A[a+1]*0.186;
	  
	    C[a]=B[a][a][a]-A[a];
	    C[a-2]=D[a][a][a];
	  
	    double var_a=D[a][a][a]*0.383;
	    double var_b=D[a-1][a-5][a-3]*0.607;
	  
	    double var_c=A[a]*0.377;
	    double var_d=A[a-3]+0.923;
	  
	    double var_e=B[a][a][a]/0.847;
	    double var_f=B[a+3][a+1][a+4]/0.011;
	}

    return 0;
}
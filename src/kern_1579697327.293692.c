#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(60, "zeros");
	double **B = create_two_dim_double(350, 910, "zeros");
	double ***A = create_three_dim_double(930, 900, 830, "zeros");
	double **D = create_two_dim_double(230, 800, "zeros");

	for (int a = 5; a < 60; a++)
	{
	  
	    D[a][a]=D[a][a+1]/0.55;
	  
	    A[a][a][a]=D[a][a]-0.943;
	    A[a][a-1][a]=C[a]-C[a];
	  
	    C[a]=0.964;
	    C[a-1]=0.601;
	  
	    double var_a=D[a][a]-0.733;
	    double var_b=D[a-4][a-3]+0.705;
	  
	    double var_c=A[a][a][a]-0.748;
	    double var_d=A[a-3][a-5][a-3]+0.074;
	  
	    A[a][a][a]=D[a][a]/B[a][a]*C[a]-A[a][a][a];
	    D[a][a]=D[a+2][a+5]/B[a][a]*C[a]-A[a][a][a];
	  
	    double var_e=D[a][a]/0.477;
	    double var_f=D[a][a+3]*0.638;
	}

    return 0;
}
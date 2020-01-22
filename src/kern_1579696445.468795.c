#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(730, 170, 160, "zeros");
	double *B = create_one_dim_double(380, "zeros");
	double *C = create_one_dim_double(1000, "zeros");
	double **A = create_two_dim_double(350, 620, "zeros");

	for (int a = 5; a < 345; a++)
	{
	  
	    B[a]=B[a-3]*0.335;
	  
	    A[a][a]=A[a-5][a-1]-0.802;
	  
	    D[a][a][a]=0.251;
	    D[a-5][a-2][a]=0.692;
	  
	    D[a][a][a]=A[a][a]+B[a];
	    C[a]=A[a][a+1]-0.961;
	  
	    double var_a=D[a][a][a]-0.059;
	    double var_b=D[a-3][a-1][a-1]+0.784;
	  
	    double var_c=A[a][a]+0.91;
	    double var_d=A[a+4][a+5]/0.785;
	}

    return 0;
}
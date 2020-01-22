#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(990, 350, "zeros");
	double ***D = create_three_dim_double(300, 330, 620, "zeros");
	double ***C = create_three_dim_double(180, 570, 710, "zeros");
	double *A = create_one_dim_double(580, "zeros");
	double **B = create_two_dim_double(140, 10, "zeros");

	for (int a = 5; a < 140; a++)
	{
	  
	    E[a][a]=E[a-1][a]/0.669;
	  
	    C[a][a][a]=C[a][a][a-5]/E[a][a]+B[a][a]-D[a][a][a];
	  
	    C[a][a][a]=C[a+4][a+5][a]*0.616;
	  
	    E[a][a]=0.741;
	  
	    double var_a=E[a][a]+0.571;
	    double var_b=E[a-5][a-3]*0.785;
	  
	    double var_c=B[a][a]*0.258;
	    double var_d=B[a][a-2]-0.034;
	}

    return 0;
}
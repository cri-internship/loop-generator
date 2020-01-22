#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(840, 650, "zeros");
	double ***B = create_three_dim_double(220, 240, 490, "zeros");
	double **D = create_two_dim_double(370, 490, "zeros");
	double *A = create_one_dim_double(740, "zeros");

	for (int a = 5; a < 215; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-5][a-3]-A[a]/D[a][a]+C[a][a];
	  
	    D[a][a]=D[a+5][a+3]-0.701;
	  
	    B[a][a][a]=B[a+1][a+4][a+4]-0.662;
	  
	    double var_a=C[a][a]+0.921;
	    double var_b=C[a+4][a+3]*0.181;
	  
	    double var_c=A[a]+0.782;
	    double var_d=A[a-4]+0.817;
	}

    return 0;
}
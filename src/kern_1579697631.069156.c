#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(660, "ones");
	double ***D = create_three_dim_double(500, 700, 120, "ones");
	double **E = create_two_dim_double(140, 590, "ones");
	double ***B = create_three_dim_double(480, 140, 320, "ones");
	double **C = create_two_dim_double(410, 260, "ones");

	for (int a = 4; a < 410; a++)
	{
	  
	    C[a][a]=C[a-4][a-3]-0.772;
	  
	    C[a][a]=C[a][a-4]+0.862;
	  
	    B[a][a][a]=B[a+3][a+2][a+2]/0.79;
	  
	    D[a][a][a]=D[a+5][a+3][a]/0.581;
	  
	    A[a]=C[a][a]*E[a][a];
	    A[a-3]=B[a][a][a]+D[a][a][a]*E[a][a]-D[a][a][a];
	  
	    double var_a=A[a]/0.795;
	    double var_b=A[a-2]/0.999;
	  
	    double var_c=C[a][a]+0.835;
	    double var_d=C[a-4][a-2]/0.279;
	}

    return 0;
}
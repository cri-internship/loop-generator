#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(180, 870, "zeros");
	double ***A = create_three_dim_double(890, 410, 430, "zeros");
	double **C = create_two_dim_double(170, 530, "zeros");

	for (int a = 4; a < 166; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-4][a]-C[a][a];
	  
	    B[a][a]=B[a+5][a+4]/0.585;
	  
	    double var_a=B[a][a]-0.959;
	    double var_b=B[a-3][a-2]*0.64;
	  
	    double var_c=C[a][a]*0.624;
	    double var_d=C[a][a+4]-0.321;
	}

    return 0;
}
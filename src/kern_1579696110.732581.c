#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(750, 50, 310, "zeros");
	double *A = create_one_dim_double(680, "zeros");
	double ***D = create_three_dim_double(170, 880, 260, "zeros");
	double *C = create_one_dim_double(410, "zeros");

	for (int a = 5; a < 165; a++)
	{
	  
	    D[a][a][a]=D[a][a-5][a-3]/0.754;
	  
	    C[a]=C[a+5]+D[a][a][a]-A[a]/B[a][a][a];
	  
	    D[a][a][a]=D[a+5][a+2][a+2]/C[a]+A[a];
	  
	    double var_a=D[a][a][a]*0.206;
	    double var_b=D[a-5][a-1][a-4]/0.379;
	}

    return 0;
}
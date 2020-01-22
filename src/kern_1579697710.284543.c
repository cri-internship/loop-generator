#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(920, "zeros");
	double ***B = create_three_dim_double(270, 170, 150, "zeros");
	double ***A = create_three_dim_double(160, 680, 580, "zeros");

	for (int a = 5; a < 265; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+4][a+5]-A[a][a][a]*C[a];
	  
	    double var_a=B[a][a][a]-0.574;
	    double var_b=B[a][a-2][a-5]*0.037;
	}

    return 0;
}
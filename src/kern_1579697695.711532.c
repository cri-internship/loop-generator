#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(900, 550, "ones");
	double *B = create_one_dim_double(60, "ones");
	double ***A = create_three_dim_double(520, 160, 540, "ones");

	for (int a = 5; a < 60; a++)
	{
	  
	    B[a]=B[a-3]-0.573;
	  
	    B[a]=B[a-2]+0.277;
	  
	    C[a][a]=C[a][a-3]-0.99;
	  
	    C[a][a]=C[a+5][a+4]+B[a];
	  
	    B[a]=B[a]-0.671;
	    B[a]=0.303;
	  
	    double var_a=A[a][a][a]/0.9;
	    double var_b=A[a-5][a-2][a-1]/0.524;
	}

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(670, 20, 550, "ones");
	double **A = create_two_dim_double(430, 660, "ones");

	for (int a = 5; a < 425; a++)
	{
	  
	    A[a][a]=A[a+5][a+1]/B[a][a][a];
	  
	    B[a][a][a]=B[a+4][a+3][a+3]/0.029;
	  
	    A[a][a]=0.248;
	  
	    double var_a=B[a][a][a]*0.272;
	    double var_b=B[a+1][a+2][a]/0.43;
	  
	    double var_c=A[a][a]/0.109;
	    double var_d=A[a-5][a-1]/0.375;
	}

    return 0;
}
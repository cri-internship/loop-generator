#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(190, 580, "zeros");
	double *B = create_one_dim_double(130, "zeros");
	double **C = create_two_dim_double(420, 650, "zeros");

	for (int a = 5; a < 130; a++)
	{
	  
	    B[a]=B[a-5]*0.049;
	  
	    C[a][a]=C[a][a+2]+0.263;
	  
	    double var_a=C[a][a]+0.395;
	    double var_b=C[a+3][a+5]+0.579;
	}

    return 0;
}
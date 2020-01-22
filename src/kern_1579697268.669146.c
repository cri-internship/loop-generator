#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(540, 50, "zeros");
	double ***D = create_three_dim_double(580, 230, 990, "zeros");
	double *C = create_one_dim_double(130, "zeros");
	double **A = create_two_dim_double(970, 50, "zeros");

	for (int a = 0; a < 969; a++)
	{
	  
	    double var_a=A[a][a]+0.114;
	    double var_b=A[a][a+1]-0.445;
	}

    return 0;
}
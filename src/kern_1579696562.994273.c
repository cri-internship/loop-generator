#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(760, "ones");
	double *C = create_one_dim_double(240, "ones");
	double ***A = create_three_dim_double(540, 870, 910, "ones");
	double **B = create_two_dim_double(480, 260, "ones");

	for (int a = 0; a < 235; a++)
	{
	  
	    C[a]=C[a+5]+0.435-A[a][a][a];
	  
	    double var_a=C[a]/0.085;
	    double var_b=C[a+1]+0.769;
	}

    return 0;
}
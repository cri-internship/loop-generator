#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(760, "ones");
	double *B = create_one_dim_double(860, "ones");

	for (int a = 0; a < 855; a++)
	{
	  
	    double var_a=B[a]/0.356;
	    B[a]=0.857;
	  
	    double var_b=B[a]/0.599;
	    double var_c=B[a+5]+0.018;
	  
	    double var_d=B[a]+0.952;
	    double var_e=B[a+3]+0.382;
	}

    return 0;
}
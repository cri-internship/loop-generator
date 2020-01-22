#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(480, "zeros");
	double ***A = create_three_dim_double(1000, 770, 720, "zeros");
	double **C = create_two_dim_double(790, 760, "zeros");

	for (int a = 3; a < 479; a++)
	{
	  
	    B[a]=0.158;
	    float  var_a=B[a]-0.518;
	  
	    B[a]=0.671;
	  
	    double var_b=B[a]/0.245;
	    double var_c=B[a-3]+0.406;
	}

    return 0;
}
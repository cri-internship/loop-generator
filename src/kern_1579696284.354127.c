#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(70, 660, 740, "ones");
	double **D = create_two_dim_double(770, 580, "ones");
	double *B = create_one_dim_double(390, "ones");
	double ***C = create_three_dim_double(120, 890, 540, "ones");

	for (int a = 3; a < 66; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-2][a-3]-0.539;
	  
	    double var_a=A[a][a][a]-0.274;
	    double var_b=A[a+2][a+3][a+4]*0.807;
	}

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(550, 730, 430, "ones");
	double **B = create_two_dim_double(80, 450, "ones");
	double *C = create_one_dim_double(320, "ones");

	for (int a = 5; a < 80; a++)
	{
	  
	    B[a][a]=B[a-5][a]-0.172;
	}

    return 0;
}
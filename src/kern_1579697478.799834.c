#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(550, 450, 650, "random");
	double **B = create_two_dim_double(960, 940, "random");

	for (int a = 5; a < 550; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-2][a-5]*0.815;
	  
	    A[a][a][a]=B[a][a];
	  
	    double var_a=B[a][a]-0.305;
	    double var_b=B[a+5][a+4]/0.478;
	}

    return 0;
}
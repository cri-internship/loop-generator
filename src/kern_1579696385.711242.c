#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(440, 870, 70, "random");
	double **B = create_two_dim_double(290, 90, "random");

	for (int a = 5; a < 285; a++)
	{
	  
	    B[a][a]=B[a][a-1]*0.365;
	  
	    B[a][a]=B[a+3][a+5]+0.742;
	  
	    A[a][a][a]=0.275;
	    A[a+4][a+3][a+1]=0.721;
	  
	    double var_a=B[a][a]-0.768;
	    double var_b=B[a-5][a-5]/0.821;
	}

    return 0;
}
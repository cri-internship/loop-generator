#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(670, 650, "zeros");
	double ***A = create_three_dim_double(120, 60, 1000, "zeros");

	for (int a = 5; a < 115; a++)
	{
	  
	    A[a][a][a]=0.971;
	    A[a+5][a+4][a+4]=0.218;
	  
	    B[a][a]=0.056;
	    B[a][a]=0.826;
	  
	    double var_a=B[a][a]/0.662;
	    double var_b=B[a-3][a-5]-0.377;
	}

    return 0;
}
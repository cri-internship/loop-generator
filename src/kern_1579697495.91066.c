#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(950, "ones");
	double **A = create_two_dim_double(570, 600, "ones");
	double ***B = create_three_dim_double(620, 440, 600, "ones");
	double *C = create_one_dim_double(240, "ones");

	for (int a = 3; a < 565; a++)
	{
	  
	    D[a]=0.98;
	    float  var_a=D[a]-0.132;
	  
	    B[a][a][a]=B[a-2][a-3][a-1]+0.766;
	  
	    A[a][a]=A[a+2][a]*0.615;
	  
	    A[a][a]=0.496;
	}

    return 0;
}
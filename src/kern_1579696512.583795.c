#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(250, 620, 940, "random");
	double *B = create_one_dim_double(190, "random");

	for (int a = 5; a < 185; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a-1]+B[a];
	  
	    double var_a=B[a]-0.095;
	    B[a]=0.249;
	  
	    A[a][a][a]=A[a+4][a][a+5]+0.993;
	  
	    B[a]=B[a]/0.768;
	    A[a][a][a]=B[a+5]+A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]+0.051;
	    A[a][a][a]=A[a-1][a-2][a-5]*B[a];
	}

    return 0;
}
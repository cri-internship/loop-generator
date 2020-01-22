#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(850, "zeros");
	double **A = create_two_dim_double(370, 780, "zeros");

	for (int a = 5; a < 370; a++)
	{
	  
	    B[a]=B[a-4]+0.897;
	  
	    A[a][a]=A[a-5][a-2]/B[a];
	  
	    A[a][a]=0.174;
	  
	    double var_a=A[a][a]+0.05;
	    double var_b=A[a-1][a-3]*0.546;
	  
	    A[a][a]=A[a][a]/0.94;
	    B[a]=A[a-5][a-5]/0.963;
	}

    return 0;
}
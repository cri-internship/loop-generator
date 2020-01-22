#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(480, 980, "zeros");
	double ***A = create_three_dim_double(250, 210, 180, "zeros");

	for (int a = 5; a < 247; a++)
	{
	  
	    B[a][a]=B[a-5][a-5]-0.438;
	  
	    A[a][a][a]=A[a+2][a+3][a]-B[a][a];
	  
	    A[a][a][a]=0.763;
	  
	    B[a][a]=B[a][a]-A[a][a][a];
	    A[a][a][a]=B[a-2][a]+A[a][a][a];
	  
	    A[a][a][a]=B[a][a]-A[a][a][a];
	    A[a][a][a]=B[a][a-1]/A[a][a][a];
	}

    return 0;
}
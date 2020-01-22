#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(600, "random");
	double ***A = create_three_dim_double(220, 80, 700, "random");

	for (int a = 5; a < 216; a++)
	{
	  
	    A[a][a][a]=B[a];
	    A[a-4][a-3][a-1]=B[a];
	  
	    A[a][a][a]=B[a];
	  
	    A[a][a][a]=A[a][a][a]-B[a];
	    B[a]=A[a+4][a+4][a+1]-B[a];
	  
	    B[a]=B[a]*A[a][a][a];
	    A[a][a][a]=B[a+5]+A[a][a][a];
	}

    return 0;
}
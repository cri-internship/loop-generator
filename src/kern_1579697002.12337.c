#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(140, 870, "random");
	double ***B = create_three_dim_double(480, 260, 200, "random");

	for (int a = 5; a < 135; a++)
	{
	  
	    B[a][a][a]=0.724;
	    B[a-3][a-2][a-1]=0.876;
	  
	    A[a][a]=A[a][a]/B[a][a][a];
	    B[a][a][a]=A[a+5][a+1]*B[a][a][a];
	  
	    A[a][a]=A[a][a]/B[a][a][a];
	    B[a][a][a]=A[a-3][a-5]+B[a][a][a];
	}

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(180, 980, 210, "random");
	double **A = create_two_dim_double(80, 620, "random");
	double **B = create_two_dim_double(280, 400, "random");

	for (int a = 5; a < 80; a++)
	{
	  
	    C[a][a][a]=C[a+1][a+1][a+4]+0.788;
	  
	    A[a][a]=0.889;
	    A[a-5][a-5]=C[a][a][a];
	}

    return 0;
}
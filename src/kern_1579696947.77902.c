#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(610, "ones");
	double **A = create_two_dim_double(170, 570, "ones");
	double ***C = create_three_dim_double(560, 830, 490, "ones");
	double **D = create_two_dim_double(790, 280, "ones");

	for (int a = 4; a < 555; a++)
	{
	  
	    D[a][a]=D[a+3][a+5]+0.156;
	  
	    C[a][a][a]=C[a+2][a+5][a+1]-A[a][a];
	  
	    C[a][a][a]=D[a][a]+0.856;
	  
	    D[a][a]=0.772;
	}

    return 0;
}
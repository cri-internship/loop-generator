#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(120, 350, "ones");
	double ***A = create_three_dim_double(900, 950, 90, "ones");
	double *B = create_one_dim_double(610, "ones");
	double ***C = create_three_dim_double(190, 950, 570, "ones");

	for (int a = 5; a < 120; a++)
	{
	  
	    D[a][a]=D[a-2][a]-0.11;
	  
	    B[a]=B[a+5]-0.669;
	  
	    B[a]=B[a+4]-0.423;
	  
	    B[a]=B[a+3]-D[a][a]*C[a][a][a];
	  
	    D[a][a]=B[a];
	}

    return 0;
}
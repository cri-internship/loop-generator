#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(50, 460, "ones");
	double ***B = create_three_dim_double(690, 490, 570, "ones");

	for (int a = 5; a < 47; a++)
	{
	  
	    B[a][a][a]=B[a+2][a+1][a]*A[a][a];
	  
	    A[a][a]=A[a][a+3]*0.611;
	  
	    B[a][a][a]=A[a][a];
	}

    return 0;
}
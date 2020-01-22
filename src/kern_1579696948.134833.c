#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(20, 930, 410, "zeros");
	double **A = create_two_dim_double(70, 320, "zeros");
	double ***D = create_three_dim_double(610, 450, 170, "zeros");
	double ***C = create_three_dim_double(680, 660, 450, "zeros");

	for (int a = 5; a < 680; a++)
	{
	  
	    C[a][a][a]=0.874;
	    C[a-5][a][a-4]=0.148;
	  
	    C[a][a][a]=A[a][a];
	}

    return 0;
}
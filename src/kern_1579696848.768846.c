#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(680, 50, 320, "random");
	double **A = create_two_dim_double(840, 910, "random");
	double **B = create_two_dim_double(520, 850, "random");
	double *D = create_one_dim_double(550, "random");

	for (int a = 4; a < 550; a++)
	{
	  
	    D[a]=D[a-4]*B[a][a]/C[a][a][a]-A[a][a];
	  
	    A[a][a]=A[a+4][a+3]+D[a];
	  
	    A[a][a]=0.728-C[a][a][a]/B[a][a];
	}

    return 0;
}
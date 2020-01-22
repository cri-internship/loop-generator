#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(960, 820, "zeros");
	double ***C = create_three_dim_double(220, 830, 210, "zeros");
	double *B = create_one_dim_double(110, "zeros");
	double ***D = create_three_dim_double(660, 390, 820, "zeros");
	double **E = create_two_dim_double(330, 500, "zeros");

	for (int a = 0; a < 325; a++)
	{
	  
	    E[a][a]=D[a][a][a];
	    E[a][a+5]=A[a][a]-B[a]*0.793;
	}

    return 0;
}
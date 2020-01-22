#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(700, 640, "zeros");
	double **B = create_two_dim_double(530, 300, "zeros");
	double **A = create_two_dim_double(910, 370, "zeros");
	double ***C = create_three_dim_double(760, 700, 990, "zeros");
	double *D = create_one_dim_double(530, "zeros");

	for (int a = 5; a < 530; a++)
	{
	  
	    B[a][a]=B[a-5][a-4]/0.351;
	}

    return 0;
}
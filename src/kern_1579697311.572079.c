#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(620, 580, 760, "zeros");
	double *C = create_one_dim_double(680, "zeros");
	double **A = create_two_dim_double(450, 150, "zeros");

	for (int a = 0; a < 676; a++)
	{
	  
	    C[a]=C[a+4]/B[a][a][a]-A[a][a];
	  
	    C[a]=C[a+3]*A[a][a];
	}

    return 0;
}
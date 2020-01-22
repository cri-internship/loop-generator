#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(610, "zeros");
	double *D = create_one_dim_double(180, "zeros");
	double **B = create_two_dim_double(80, 420, "zeros");
	double **C = create_two_dim_double(480, 110, "zeros");

	for (int a = 2; a < 180; a++)
	{
	  
	    D[a]=D[a-2]*0.581;
	}

    return 0;
}
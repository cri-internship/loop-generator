#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(30, 320, "zeros");
	double *B = create_one_dim_double(470, "zeros");
	double **E = create_two_dim_double(350, 840, "zeros");
	double **C = create_two_dim_double(60, 980, "zeros");
	double *D = create_one_dim_double(10, "zeros");

	for (int a = 3; a < 470; a++)
	{
	  
	    B[a]=B[a-3]*0.832;
	}

    return 0;
}
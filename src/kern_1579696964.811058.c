#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(220, "random");
	double **D = create_two_dim_double(720, 720, "random");
	double *B = create_one_dim_double(520, "random");
	double **C = create_two_dim_double(610, 830, "random");
	double *E = create_one_dim_double(220, "random");

	for (int c = 0; c < 518; c++)
	  for (int b = 0; b < 518; b++)
	    for (int a = 0; a < 518; a++)
	    {
	      
	      B[a]=B[a+2]-0.969;
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(540, 820, "random");
	double *A = create_one_dim_double(670, "random");
	double **B = create_two_dim_double(490, 60, "random");
	double **D = create_two_dim_double(610, 180, "random");

	for (int c = 2; c < 60; c++)
	  for (int b = 3; b < 490; b++)
	    for (int a = 3; a < 490; a++)
	    {
	      
	      B[a][b]=B[a-3][b-1]+0.741;
	      
	      C[a][b]=C[a-1][b-2]+0.582;
	    }

    return 0;
}
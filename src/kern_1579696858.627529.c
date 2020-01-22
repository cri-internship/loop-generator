#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(260, 260, "random");
	double **D = create_two_dim_double(20, 810, "random");
	double ***B = create_three_dim_double(530, 390, 860, "random");
	double *A = create_one_dim_double(620, "random");

	for (int b = 0; b < 389; b++)
	  for (int a = 0; a < 529; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b+1][a]/A[a]*C[a][b];
	  }

    return 0;
}
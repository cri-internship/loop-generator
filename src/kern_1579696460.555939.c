#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(900, 790, "zeros");
	double **D = create_two_dim_double(530, 400, "zeros");
	double *A = create_one_dim_double(240, "zeros");
	double *B = create_one_dim_double(250, "zeros");

	for (int b = 0; b < 250; b++)
	  for (int a = 0; a < 250; a++)
	  {
	    
	     D[a][b]=B[a]*C[a][b]+D[a][b];
	     B[a]=A[a]-C[a][b]*A[a];
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(180, 740, "zeros");
	double **B = create_two_dim_double(930, 440, "zeros");
	double **D = create_two_dim_double(290, 790, "zeros");
	double *C = create_one_dim_double(130, "zeros");
	double ***E = create_three_dim_double(950, 360, 170, "zeros");

	for (int b = 3; b < 740; b++)
	  for (int a = 0; a < 180; a++)
	  {
	    
	     A[a][b]=A[a][b-3]/C[a]-B[a][b]*D[a][b]+E[a][b][a];
	    
	     D[a][b]=D[a+4][b+3]+A[a][b]/A[a][b]-E[a][b][a];
	  }

    return 0;
}
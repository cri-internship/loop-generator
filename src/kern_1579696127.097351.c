#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(120, "ones");
	double **B = create_two_dim_double(420, 700, "ones");
	double *D = create_one_dim_double(430, "ones");
	double *A = create_one_dim_double(180, "ones");
	double **E = create_two_dim_double(850, 690, "ones");

	for (int d = 2; d < 120; d++)
	  for (int c = 2; c < 120; c++)
	    for (int b = 2; b < 120; b++)
	      for (int a = 2; a < 120; a++)
	      {
	        
	       C[a]=C[a-2]-0.816;
	        
	       E[a][b]=D[a]/E[a][b]*C[a]-B[a][b];
	       A[a]=D[a]/0.213;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(80, 1000, "random");
	double **C = create_two_dim_double(480, 60, "random");
	double *B = create_one_dim_double(620, "random");

	for (int d = 2; d < 620; d++)
	  for (int c = 2; c < 620; c++)
	    for (int b = 2; b < 620; b++)
	      for (int a = 2; a < 620; a++)
	      {
	        
	       C[a][b]=B[a]-A[a][b]*C[a][b];
	       B[a]=B[a-1]-A[a][b]+C[a][b];
	        
	       A[a][b]=B[a]+C[a][b];
	       C[a][b]=B[a-2]*C[a][b]+A[a][b];
	      }

    return 0;
}
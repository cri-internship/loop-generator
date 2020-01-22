#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(390, "ones");
	double **B = create_two_dim_double(220, 50, "ones");
	double **A = create_two_dim_double(310, 410, "ones");
	double **C = create_two_dim_double(360, 320, "ones");

	for (int d = 4; d < 45; d++)
	  for (int c = 5; c < 219; c++)
	    for (int b = 5; b < 219; b++)
	      for (int a = 5; a < 219; a++)
	      {
	        
	       B[a][b]=B[a-3][b-4]-D[a]*A[a][b]+0.956;
	        
	       D[a]=B[a][b];
	       A[a][b]=D[a]/A[a][b]-C[a][b];
	        
	       D[a]=D[a-5]/0.964;
	        
	       A[a][b]=A[a-3][b-4]+D[a]*B[a][b]/0.027;
	        
	       B[a][b]=B[a][b]-D[a]/C[a][b]*A[a][b];
	       D[a]=B[a+1][b+5]*C[a][b]/D[a]+A[a][b];
	      }

    return 0;
}
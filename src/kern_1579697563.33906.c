#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(580, 610, "zeros");
	double *A = create_one_dim_double(830, "zeros");
	double *B = create_one_dim_double(250, "zeros");
	double ***C = create_three_dim_double(880, 400, 150, "zeros");

	for (int d = 3; d < 150; d++)
	  for (int c = 5; c < 400; c++)
	    for (int b = 4; b < 250; b++)
	      for (int a = 4; a < 250; a++)
	      {
	        
	       A[a]=A[a-4]+0.438;
	        
	       A[a]=A[a+1]-0.387;
	        
	       D[a][b]=D[a+4][b]/0.55;
	        
	       C[a][b][c]=0.293;
	       C[a-3][b-5][c-3]=0.633;
	        
	       B[a]=B[a]*C[a][b][c];
	       A[a]=B[a-2]-D[a][b];
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(570, 940, "ones");
	double *B = create_one_dim_double(690, "ones");
	double ***C = create_three_dim_double(700, 840, 640, "ones");

	for (int d = 1; d < 939; d++)
	  for (int c = 0; c < 570; c++)
	    for (int b = 0; b < 570; b++)
	      for (int a = 0; a < 570; a++)
	      {
	        
	       A[a][b]=A[a][b-1]/B[a]-0.835;
	        
	       B[a]=0.081;
	       B[a+3]=0.037;
	        
	       A[a][b]=A[a][b]+B[a];
	       B[a]=A[a][b+1]/B[a]+C[a][b][c];
	      }

    return 0;
}
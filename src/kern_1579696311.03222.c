#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(180, "zeros");
	double *D = create_one_dim_double(540, "zeros");
	double ***C = create_three_dim_double(210, 200, 960, "zeros");
	double **A = create_two_dim_double(680, 770, "zeros");

	for (int d = 0; d < 770; d++)
	  for (int c = 5; c < 180; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       B[a]=B[a-5]*0.892;
	        
	       D[a]=D[a+2]-0.086;
	        
	       A[a][b]=0.324;
	       A[a-3][b]=0.378;
	      }

    return 0;
}
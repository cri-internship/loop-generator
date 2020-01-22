#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(720, "random");
	float **E = create_two_dim_float(780, 1000, "random");
	float **B = create_two_dim_float(780, 830, "random");
	float ***C = create_three_dim_float(450, 800, 510, "random");
	float *A = create_one_dim_float(770, "random");

	for (int d = 0; d < 830; d++)
	  for (int c = 2; c < 720; c++)
	    for (int b = 2; b < 720; b++)
	      for (int a = 2; a < 720; a++)
	      {
	        
	       D[a]=D[a-2]*0.317+E[a][b];
	        
	       B[a][b]=A[a]*D[a];
	       D[a]=B[a][b]*C[a][b][c];
	        
	       E[a][b]=E[a][b+2]*0.319-C[a][b][c]+A[a];
	        
	       A[a]=A[a+3]*0.761;
	      }

    return 0;
}
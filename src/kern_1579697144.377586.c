#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(410, "random");
	float ***C = create_three_dim_float(60, 1000, 470, "random");
	float **B = create_two_dim_float(230, 580, "random");
	float **A = create_two_dim_float(220, 950, "random");

	for (int d = 0; d < 946; d++)
	  for (int c = 2; c < 217; c++)
	    for (int b = 2; b < 217; b++)
	      for (int a = 2; a < 217; a++)
	      {
	        
	       D[a]=D[a-2]*0.489;
	        
	       A[a][b]=A[a+3][b+4]/B[a][b];
	        
	       D[a]=0.664;
	        
	       D[a]=D[a]+C[a][b][c]-A[a][b]*B[a][b];
	       C[a][b][c]=D[a]-A[a][b]/B[a][b]*C[a][b][c];
	      }

    return 0;
}
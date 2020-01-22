#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(900, 50, 580, "random");
	float **B = create_two_dim_float(560, 860, "random");
	float **A = create_two_dim_float(430, 140, "random");
	float ***C = create_three_dim_float(830, 390, 60, "random");

	for (int d = 5; d < 60; d++)
	  for (int c = 5; c < 390; c++)
	    for (int b = 1; b < 560; b++)
	      for (int a = 1; a < 560; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-5][c-5]+A[a][b]/D[a][b][c]-B[a][b];
	        
	       C[a][b][c]=D[a][b][c];
	        
	       B[a][b]=C[a][b][c]/A[a][b];
	       B[a][b]=C[a][b][c];
	      }

    return 0;
}
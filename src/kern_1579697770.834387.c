#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(450, 640, "ones");
	float ***D = create_three_dim_float(560, 700, 210, "ones");
	float **A = create_two_dim_float(230, 460, "ones");
	float **B = create_two_dim_float(590, 140, "ones");

	for (int d = 4; d < 210; d++)
	  for (int c = 4; c < 140; c++)
	    for (int b = 4; b < 450; b++)
	      for (int a = 4; a < 450; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b-1][c-4]-A[a][b]*B[a][b]+C[a][b];
	        
	       B[a][b]=B[a][b-4]-D[a][b][c];
	        
	       C[a][b]=D[a][b][c]*A[a][b];
	       C[a-1][b-4]=A[a][b]*D[a][b][c]/B[a][b];
	        
	       A[a][b]=B[a][b]/D[a][b][c]-A[a][b];
	       C[a][b]=B[a][b-1]*D[a][b][c]/A[a][b];
	      }

    return 0;
}
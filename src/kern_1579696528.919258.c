#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(500, 150, 70, "ones");
	float **E = create_two_dim_float(700, 580, "ones");
	float **B = create_two_dim_float(810, 640, "ones");
	float *A = create_one_dim_float(160, "ones");
	float ***D = create_three_dim_float(60, 660, 630, "ones");

	for (int d = 3; d < 580; d++)
	  for (int c = 3; c < 697; c++)
	    for (int b = 3; b < 697; b++)
	      for (int a = 3; a < 697; a++)
	      {
	        
	       B[a][b]=B[a-3][b-3]-C[a][b][c]+D[a][b][c]/E[a][b]*A[a];
	        
	       E[a][b]=E[a+3][b]/B[a][b]-D[a][b][c]+C[a][b][c];
	        
	       B[a][b]=D[a][b][c]+C[a][b][c]-A[a]*E[a][b];
	      }

    return 0;
}
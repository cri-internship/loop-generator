#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(390, 810, "ones");
	float *D = create_one_dim_float(930, "ones");
	float **A = create_two_dim_float(350, 810, "ones");
	float ***C = create_three_dim_float(260, 930, 410, "ones");

	for (int d = 0; d < 806; d++)
	  for (int c = 3; c < 350; c++)
	    for (int b = 3; b < 350; b++)
	      for (int a = 3; a < 350; a++)
	      {
	        
	       D[a]=D[a-2]*A[a][b]/B[a][b];
	        
	       D[a]=D[a-3]/C[a][b][c]*C[a][b][c]+A[a][b];
	        
	       B[a][b]=B[a+3][b+4]-D[a];
	        
	       A[a][b]=0.475;
	       A[a][b]=0.847;
	        
	       B[a][b]=0.717;
	        
	       C[a][b][c]=D[a]/B[a][b]-C[a][b][c]*0.13;
	       B[a][b]=D[a-1]-A[a][b]+C[a][b][c]*B[a][b];
	      }

    return 0;
}
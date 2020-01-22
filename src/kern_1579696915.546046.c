#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(190, "random");
	float *A = create_one_dim_float(60, "random");
	float ***C = create_three_dim_float(150, 210, 890, "random");
	float **B = create_two_dim_float(810, 60, "random");

	for (int d = 0; d < 888; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 3; b < 57; b++)
	      for (int a = 3; a < 57; a++)
	      {
	        
	       A[a]=A[a-3]-B[a][b]*C[a][b][c]/D[a];
	        
	       B[a][b]=A[a]-0.432+B[a][b]*C[a][b][c];
	        
	       B[a][b]=B[a-2][b-4]/0.608;
	        
	       C[a][b][c]=C[a+3][b+5][c+2]+0.03;
	        
	       A[a]=A[a+3]*0.483;
	        
	       C[a][b][c]=C[a+3][b][c+2]+A[a]*A[a]-B[a][b];
	      }

    return 0;
}
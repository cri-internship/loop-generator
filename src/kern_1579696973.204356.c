#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(10, 920, 420, "zeros");
	float *B = create_one_dim_float(580, "zeros");
	float **D = create_two_dim_float(740, 800, "zeros");
	float *A = create_one_dim_float(300, "zeros");

	for (int d = 0; d < 419; d++)
	  for (int c = 0; c < 800; c++)
	    for (int b = 5; b < 7; b++)
	      for (int a = 5; a < 7; a++)
	      {
	        
	       D[a][b]=D[a-3][b]+0.592;
	        
	       B[a]=B[a+4]-D[a][b]+C[a][b][c]/A[a];
	        
	       C[a][b][c]=C[a+3][b][c+1]-B[a]+D[a][b]*0.077;
	        
	       B[a]=A[a]-C[a][b][c]/B[a]*D[a][b];
	       A[a]=A[a+1]-C[a][b][c];
	        
	       D[a][b]=D[a][b]/A[a]*C[a][b][c]+0.935;
	       C[a][b][c]=D[a-5][b]*C[a][b][c];
	      }

    return 0;
}
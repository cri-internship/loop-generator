#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(550, 100, 480, "zeros");
	float **C = create_two_dim_float(600, 640, "zeros");
	float *B = create_one_dim_float(770, "zeros");
	float ***E = create_three_dim_float(900, 80, 210, "zeros");
	float **D = create_two_dim_float(720, 480, "zeros");

	for (int d = 5; d < 477; d++)
	  for (int c = 4; c < 95; c++)
	    for (int b = 5; b < 549; b++)
	      for (int a = 5; a < 549; a++)
	      {
	        
	       B[a]=B[a-5]+0.697;
	        
	       C[a][b]=C[a-5][b-4]/A[a][b][c]-E[a][b][c]+B[a];
	        
	       B[a]=B[a+4]/0.657;
	        
	       A[a][b][c]=A[a][b][c]+B[a]-D[a][b]/E[a][b][c];
	       B[a]=A[a+1][b+5][c+3]-C[a][b]/B[a];
	        
	       E[a][b][c]=A[a][b][c]+B[a];
	       C[a][b]=A[a-4][b-2][c-5]+0.987;
	      }

    return 0;
}
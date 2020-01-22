#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(90, "ones");
	float ***D = create_three_dim_float(870, 610, 740, "ones");
	float **B = create_two_dim_float(60, 870, "ones");
	float ***E = create_three_dim_float(660, 80, 820, "ones");
	float *C = create_one_dim_float(960, "ones");

	for (int d = 5; d < 740; d++)
	  for (int c = 4; c < 79; c++)
	    for (int b = 4; b < 60; b++)
	      for (int a = 4; a < 60; a++)
	      {
	        
	       E[a][b][c]=E[a-2][b-2][c-1]/B[a][b]+A[a]-D[a][b][c];
	        
	       E[a][b][c]=E[a+5][b+1][c+3]*C[a]/B[a][b]+A[a]-C[a];
	        
	       A[a]=A[a+4]/0.562;
	        
	       A[a]=0.545;
	        
	       B[a][b]=E[a][b][c]+E[a][b][c]*D[a][b][c]-A[a];
	       B[a-2][b-4]=D[a][b][c]*C[a]-0.65+A[a];
	        
	       E[a][b][c]=C[a]/A[a]-D[a][b][c]+B[a][b];
	       A[a]=C[a-2]+D[a][b][c]/B[a][b]*0.09-A[a];
	        
	       float var_a=D[a][b][c]+0.806;
	       float var_b=D[a-1][b][c-5]+0.062;
	      }

    return 0;
}
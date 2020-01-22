#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(620, 280, 480, "random");
	float ***E = create_three_dim_float(160, 950, 620, "random");
	float *C = create_one_dim_float(290, "random");
	float **B = create_two_dim_float(700, 210, "random");
	float ***D = create_three_dim_float(90, 810, 660, "random");

	for (int d = 1; d < 480; d++)
	  for (int c = 3; c < 278; c++)
	    for (int b = 5; b < 160; b++)
	      for (int a = 5; a < 160; a++)
	      {
	        
	       B[a][b]=A[a][b][c]-E[a][b][c];
	       A[a][b][c]=A[a+2][b+2][c]*B[a][b]+C[a];
	        
	       E[a][b][c]=C[a]/A[a][b][c]+D[a][b][c]-0.741*A[a][b][c];
	        
	       D[a][b][c]=E[a][b][c]*D[a][b][c]/B[a][b];
	       B[a][b]=E[a-5][b-3][c-1]+A[a][b][c]/D[a][b][c]*C[a]-B[a][b];
	        
	       float var_a=C[a]*0.051;
	       float var_b=C[a-5]/0.206;
	      }

    return 0;
}
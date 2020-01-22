#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(110, 590, 620, "zeros");
	float ***D = create_three_dim_float(190, 720, 390, "zeros");
	float ***A = create_three_dim_float(140, 830, 270, "zeros");
	float ***B = create_three_dim_float(470, 690, 810, "zeros");
	float *E = create_one_dim_float(160, "zeros");

	for (int d = 5; d < 390; d++)
	  for (int c = 0; c < 586; c++)
	    for (int b = 1; b < 108; b++)
	      for (int a = 1; a < 108; a++)
	      {
	        
	       E[a]=D[a][b][c]*B[a][b][c]/A[a][b][c]-C[a][b][c];
	       C[a][b][c]=E[a]-0.691+C[a][b][c];
	        
	       D[a][b][c]=D[a][b][c-5]/E[a]+A[a][b][c]*E[a]-B[a][b][c];
	        
	       C[a][b][c]=0.446;
	        
	       float var_a=C[a][b][c]-0.893;
	       float var_b=C[a+2][b+4][c]*0.175;
	      }

    return 0;
}
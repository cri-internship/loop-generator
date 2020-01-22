#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(880, 690, 700, "random");
	float **D = create_two_dim_float(770, 810, "random");
	float *B = create_one_dim_float(480, "random");
	float *E = create_one_dim_float(160, "random");
	float *A = create_one_dim_float(250, "random");

	for (int d = 3; d < 696; d++)
	  for (int c = 3; c < 689; c++)
	    for (int b = 1; b < 160; b++)
	      for (int a = 1; a < 160; a++)
	      {
	        
	       E[a]=E[a-1]-C[a][b][c]*B[a];
	        
	       E[a]=B[a]*E[a]+0.688/D[a][b]-A[a];
	       B[a]=D[a][b]+C[a][b][c]/E[a]*A[a];
	        
	       D[a][b]=E[a]+C[a][b][c]*A[a];
	       D[a+4][b+2]=E[a];
	        
	       C[a][b][c]=0.305;
	       C[a+4][b+1][c+4]=0.387;
	        
	       float var_a=C[a][b][c]+0.686;
	       float var_b=C[a-1][b-3][c-3]*0.568;
	        
	       float var_c=D[a][b]/0.939;
	       float var_d=D[a-1][b-1]-0.81;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(560, "random");
	float ***D = create_three_dim_float(930, 980, 730, "random");
	float *A = create_one_dim_float(520, "random");
	float ***E = create_three_dim_float(270, 140, 380, "random");
	float **C = create_two_dim_float(530, 720, "random");

	for (int d = 3; d < 380; d++)
	  for (int c = 4; c < 140; c++)
	    for (int b = 3; b < 270; b++)
	      for (int a = 3; a < 270; a++)
	      {
	        
	       B[a]=B[a-2]-E[a][b][c]+D[a][b][c]*C[a][b]/A[a];
	        
	       E[a][b][c]=E[a-3][b][c-3]*0.65;
	        
	       D[a][b][c]=D[a-3][b-4][c-3]+0.524;
	        
	       C[a][b]=0.242;
	       C[a-2][b]=0.503;
	        
	       float var_a=D[a][b][c]+0.733;
	       float var_b=D[a+3][b+1][c+1]-0.088;
	        
	       C[a][b]=C[a][b]-B[a]/A[a]+D[a][b][c]*B[a];
	       E[a][b][c]=C[a+1][b+1]+A[a]/E[a][b][c];
	        
	       D[a][b][c]=E[a][b][c]*A[a];
	       A[a]=E[a][b][c-3]/A[a];
	      }

    return 0;
}
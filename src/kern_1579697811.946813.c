#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "ones");
	float ***D = create_three_dim_float(770, 240, 250, "ones");
	float **B = create_two_dim_float(330, 800, "ones");
	float **A = create_two_dim_float(500, 280, "ones");
	float *E = create_one_dim_float(340, "ones");

	for (int d = 4; d < 246; d++)
	  for (int c = 5; c < 238; c++)
	    for (int b = 5; b < 330; b++)
	      for (int a = 5; a < 330; a++)
	      {
	        
	       E[a]=D[a][b][c]*A[a][b];
	       E[a+3]=B[a][b]*C[a];
	        
	       C[a]=0.646;
	       C[a+3]=0.12;
	        
	       D[a][b][c]=E[a]*C[a];
	       D[a][b-4][c-4]=B[a][b]-A[a][b]*E[a];
	        
	       B[a][b]=0.694;
	       B[a-5][b-2]=D[a][b][c]/E[a]+A[a][b]-C[a];
	        
	       float var_a=B[a][b]+0.555;
	       float var_b=B[a-5][b-1]+0.219;
	        
	       float var_c=D[a][b][c]+0.219;
	       float var_d=D[a+2][b+2][c+4]+0.108;
	        
	       C[a]=D[a][b][c]+B[a][b]-0.498;
	       D[a][b][c]=D[a-2][b-5][c-1]-C[a]*E[a]/A[a][b]+B[a][b];
	      }

    return 0;
}
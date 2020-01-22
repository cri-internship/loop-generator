#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(90, 620, "random");
	float ***A = create_three_dim_float(750, 640, 920, "random");
	float *C = create_one_dim_float(820, "random");

	for (int d = 5; d < 920; d++)
	  for (int c = 3; c < 620; c++)
	    for (int b = 3; b < 90; b++)
	      for (int a = 3; a < 90; a++)
	      {
	        
	       float var_a=C[a]-0.832;
	       C[a]=0.609;
	        
	       B[a][b]=0.477;
	       B[a-2][b]=0.957;
	        
	       A[a][b][c]=0.283;
	       A[a-3][b-1][c-5]=0.265;
	        
	       B[a][b]=0.674;
	        
	       C[a]=A[a][b][c]*B[a][b];
	        
	       float var_b=A[a][b][c]/0.777;
	       float var_c=A[a][b-3][c-1]/0.883;
	        
	       float var_d=A[a][b][c]/0.51;
	       float var_e=A[a-1][b-3][c-2]-0.427;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(610, 620, 530, "random");
	float **C = create_two_dim_float(210, 880, "random");
	float **B = create_two_dim_float(100, 350, "random");
	float *D = create_one_dim_float(560, "random");
	float ***E = create_three_dim_float(950, 310, 640, "random");

	for (int d = 5; d < 530; d++)
	  for (int c = 5; c < 310; c++)
	    for (int b = 4; b < 100; b++)
	      for (int a = 4; a < 100; a++)
	      {
	        
	       B[a][b]=B[a][b-5]+0.016;
	        
	       A[a][b][c]=A[a-4][b-1][c-5]*0.369;
	        
	       E[a][b][c]=C[a][b]*B[a][b]/0.154;
	       E[a-2][b-3][c-4]=D[a]*A[a][b][c]+C[a][b]/B[a][b];
	        
	       float var_a=D[a]-0.763;
	       float var_b=D[a-2]/0.984;
	      }

    return 0;
}
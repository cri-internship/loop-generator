#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(330, "ones");
	float ***C = create_three_dim_float(630, 710, 260, "ones");
	float ***E = create_three_dim_float(80, 20, 450, "ones");
	float **D = create_two_dim_float(450, 340, "ones");
	float ***B = create_three_dim_float(320, 570, 550, "ones");

	for (int d = 3; d < 450; d++)
	  for (int c = 1; c < 20; c++)
	    for (int b = 5; b < 80; b++)
	      for (int a = 5; a < 80; a++)
	      {
	        
	       B[a][b][c]=B[a][b+5][c+3]+A[a];
	        
	       float var_a=B[a][b][c]*0.394;
	       float var_b=B[a-2][b-1][c-3]*0.577;
	        
	       E[a][b][c]=E[a][b][c]*D[a][b]-0.077;
	       D[a][b]=E[a-5][b-1][c]-B[a][b][c]+C[a][b][c]/B[a][b][c];
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(970, 670, "random");
	float ***C = create_three_dim_float(640, 540, 910, "random");
	float *E = create_one_dim_float(740, "random");
	float *B = create_one_dim_float(90, "random");
	float *D = create_one_dim_float(860, "random");

	for (int d = 0; d < 910; d++)
	  for (int c = 0; c < 540; c++)
	    for (int b = 3; b < 89; b++)
	      for (int a = 3; a < 89; a++)
	      {
	        
	       E[a]=E[a+5]+C[a][b][c]-D[a]*A[a][b];
	        
	       C[a][b][c]=0.911;
	       C[a][b][c]=0.87;
	        
	       float var_a=B[a]+0.377;
	       float var_b=B[a-3]/0.863;
	        
	       B[a]=A[a][b]+0.591;
	       E[a]=A[a+3][b+5]-B[a];
	        
	       D[a]=B[a]/0.27+C[a][b][c]-A[a][b]*D[a];
	       C[a][b][c]=B[a+1]-0.601;
	        
	       A[a][b]=D[a]*B[a]+A[a][b];
	       D[a]=D[a+3]*E[a]/A[a][b]-B[a]+C[a][b][c];
	      }

    return 0;
}
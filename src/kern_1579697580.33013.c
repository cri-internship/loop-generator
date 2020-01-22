#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(480, 580, 280, "random");
	double *C = create_one_dim_double(330, "random");
	double *A = create_one_dim_double(980, "random");
	double *B = create_one_dim_double(100, "random");

	for (int d = 4; d < 279; d++)
	  for (int c = 1; c < 580; c++)
	    for (int b = 3; b < 100; b++)
	      for (int a = 3; a < 100; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b][c-3]-0.224;
	        
	       B[a]=B[a-1]+0.787;
	        
	       D[a][b][c]=D[a][b][c+1]+0.825*A[a];
	        
	       C[a]=C[a+3]-D[a][b][c]/D[a][b][c];
	        
	       C[a]=0.336;
	        
	       double var_a=A[a]-0.196;
	       double var_b=A[a-3]/0.308;
	        
	       double var_c=D[a][b][c]-0.782;
	       double var_d=D[a-1][b-1][c-4]*0.828;
	      }

    return 0;
}
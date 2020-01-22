#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(490, "random");
	float *B = create_one_dim_float(390, "random");
	float ***A = create_three_dim_float(600, 150, 930, "random");
	float *C = create_one_dim_float(100, "random");

	for (int d = 0; d < 929; d++)
	  for (int c = 0; c < 145; c++)
	    for (int b = 5; b < 100; b++)
	      for (int a = 5; a < 100; a++)
	      {
	        
	       C[a]=C[a-2]-B[a]*0.139;
	        
	       B[a]=B[a+2]*D[a]-C[a]+C[a];
	        
	       B[a]=0.823/C[a];
	        
	       D[a]=0.816;
	       D[a-5]=0.31;
	        
	       float var_a=A[a][b][c]+0.816;
	       float var_b=A[a+4][b+1][c+1]/0.609;
	        
	       float var_c=A[a][b][c]-0.487;
	       float var_d=A[a+5][b+5][c+1]/0.353;
	        
	       C[a]=B[a]/D[a];
	       B[a]=B[a+3]/D[a]-A[a][b][c];
	      }

    return 0;
}
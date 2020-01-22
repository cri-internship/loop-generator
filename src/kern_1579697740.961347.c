#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(30, "zeros");
	float ***B = create_three_dim_float(950, 160, 820, "zeros");
	float *C = create_one_dim_float(980, "zeros");

	for (int d = 5; d < 820; d++)
	  for (int c = 4; c < 160; c++)
	    for (int b = 5; b < 25; b++)
	      for (int a = 5; a < 25; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-1][c-5]+0.508;
	        
	       B[a][b][c]=B[a-5][b-4][c-3]/A[a]+C[a];
	        
	       A[a]=A[a+3]*B[a][b][c]/B[a][b][c];
	        
	       A[a]=0.557;
	        
	       C[a]=A[a]-B[a][b][c];
	       C[a-2]=A[a]/B[a][b][c];
	        
	       C[a]=0.079;
	        
	       float var_a=A[a]/0.128;
	       float var_b=A[a+5]*0.786;
	      }

    return 0;
}
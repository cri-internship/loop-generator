#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(830, 410, "zeros");
	float ***A = create_three_dim_float(100, 890, 240, "zeros");

	for (int d = 5; d < 240; d++)
	  for (int c = 5; c < 410; c++)
	    for (int b = 5; b < 100; b++)
	      for (int a = 5; a < 100; a++)
	      {
	        
	       B[a][b]=B[a][b-5]/A[a][b][c];
	        
	       A[a][b][c]=A[a-1][b][c-5]/0.402;
	        
	       B[a][b]=B[a-5][b-2]/0.29;
	        
	       A[a][b][c]=0.807;
	        
	       float var_a=A[a][b][c]+0.849;
	       float var_b=A[a-5][b-1][c-3]/0.465;
	        
	       float var_c=A[a][b][c]/0.584;
	       float var_d=A[a-1][b-2][c-2]*0.095;
	      }

    return 0;
}
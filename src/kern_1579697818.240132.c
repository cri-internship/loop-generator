#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(900, 230, 760, "zeros");
	float *A = create_one_dim_float(740, "zeros");

	for (int d = 1; d < 755; d++)
	  for (int c = 2; c < 226; c++)
	    for (int b = 4; b < 740; b++)
	      for (int a = 4; a < 740; a++)
	      {
	        
	       A[a]=A[a-1]+0.84;
	        
	       B[a][b][c]=B[a-1][b-2][c]+0.19;
	        
	       B[a][b][c]=B[a][b+3][c+5]*0.211;
	        
	       B[a][b][c]=B[a+1][b+2][c+5]+0.182;
	        
	       float var_a=B[a][b][c]/0.946;
	       float var_b=B[a-4][b][c-1]*0.848;
	      }

    return 0;
}
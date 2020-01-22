#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(390, 460, "zeros");
	float ***A = create_three_dim_float(540, 570, 110, "zeros");

	for (int d = 0; d < 105; d++)
	  for (int c = 0; c < 459; c++)
	    for (int b = 0; b < 387; b++)
	      for (int a = 0; a < 387; a++)
	      {
	        
	       B[a][b]=B[a][b]-0.949;
	       A[a][b][c]=B[a+3][b+1]/0.857;
	        
	       float var_a=A[a][b][c]/0.357;
	       float var_b=A[a+3][b+3][c+5]*0.166;
	      }

    return 0;
}
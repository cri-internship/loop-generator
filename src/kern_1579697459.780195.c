#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(80, 570, "zeros");
	float **B = create_two_dim_float(630, 230, "zeros");

	for (int d = 4; d < 230; d++)
	  for (int c = 2; c < 77; c++)
	    for (int b = 2; b < 77; b++)
	      for (int a = 2; a < 77; a++)
	      {
	        
	       B[a][b]=B[a-2][b]-0.981;
	        
	       B[a][b]=B[a][b-1]*A[a][b];
	        
	       A[a][b]=A[a-2][b-4]-0.493;
	        
	       A[a][b]=A[a+3][b]/0.518;
	        
	       float var_a=B[a][b]*0.887;
	       float var_b=B[a-1][b]/0.092;
	      }

    return 0;
}
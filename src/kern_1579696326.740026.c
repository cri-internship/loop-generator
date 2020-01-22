#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(270, 230, "zeros");
	double ***B = create_three_dim_double(970, 750, 290, "zeros");
	double **C = create_two_dim_double(530, 10, "zeros");

	for (int d = 0; d < 6; d++)
	  for (int c = 0; c < 270; c++)
	    for (int b = 0; b < 270; b++)
	      for (int a = 0; a < 270; a++)
	      {
	        
	       A[a][b]=0.484;
	       float  var_a=A[a][b]/0.536;
	        
	       C[a][b]=C[a+5][b+4]-B[a][b][c];
	        
	       C[a][b]=0.724;
	      }

    return 0;
}
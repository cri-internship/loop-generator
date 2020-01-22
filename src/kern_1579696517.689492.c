#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(200, 430, 510, "ones");
	double ***A = create_three_dim_double(650, 420, 640, "ones");

	for (int d = 2; d < 506; d++)
	  for (int c = 4; c < 420; c++)
	    for (int b = 2; b < 199; b++)
	      for (int a = 2; a < 199; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b][c]*0.864;
	        
	       A[a][b][c]=B[a][b][c];
	        
	       double var_a=B[a][b][c]+0.556;
	       double var_b=B[a+1][b+1][c+4]/0.164;
	      }

    return 0;
}
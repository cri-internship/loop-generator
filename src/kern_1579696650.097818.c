#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(170, 100, "zeros");
	double ***A = create_three_dim_double(90, 920, 480, "zeros");

	for (int d = 0; d < 475; d++)
	  for (int c = 0; c < 918; c++)
	    for (int b = 0; b < 85; b++)
	      for (int a = 0; a < 85; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b][c+4]*0.523;
	        
	       A[a][b][c]=A[a+4][b+2][c+5]+0.581;
	      }

    return 0;
}
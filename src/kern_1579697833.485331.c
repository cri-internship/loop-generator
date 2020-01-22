#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(610, 480, 820, "zeros");

	for (int d = 2; d < 818; d++)
	  for (int c = 2; c < 480; c++)
	    for (int b = 2; b < 607; b++)
	      for (int a = 2; a < 607; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b][c+2]+0.822;
	        
	       A[a][b][c]=0.27;
	      }

    return 0;
}
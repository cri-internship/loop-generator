#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(940, 120, 350, "ones");

	for (int d = 1; d < 346; d++)
	  for (int c = 5; c < 117; c++)
	    for (int b = 2; b < 938; b++)
	      for (int a = 2; a < 938; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+3][c]/0.888;
	        
	       A[a][b][c]=A[a][b+3][c+4]+0.868;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(170, 130, 510, "random");

	for (int d = 0; d < 508; d++)
	  for (int c = 0; c < 126; c++)
	    for (int b = 0; b < 166; b++)
	      for (int a = 0; a < 166; a++)
	      {
	        
	       A[a][b][c]=0.431;
	       A[a+4][b+4][c+2]=0.905;
	      }

    return 0;
}
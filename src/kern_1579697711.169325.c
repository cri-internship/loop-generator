#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(710, 130, "zeros");

	for (int d = 0; d < 126; d++)
	  for (int c = 0; c < 705; c++)
	    for (int b = 0; b < 705; b++)
	      for (int a = 0; a < 705; a++)
	      {
	        
	       A[a][b]=A[a+5][b+4]*0.416;
	      }

    return 0;
}
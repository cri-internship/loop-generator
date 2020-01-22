#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(670, 670, "ones");

	for (int d = 1; d < 670; d++)
	  for (int c = 2; c < 670; c++)
	    for (int b = 2; b < 670; b++)
	      for (int a = 2; a < 670; a++)
	      {
	        
	       A[a][b]=A[a-2][b-1]/0.399;
	      }

    return 0;
}
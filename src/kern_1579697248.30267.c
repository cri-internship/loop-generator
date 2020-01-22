#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(810, 530, "ones");

	for (int d = 3; d < 527; d++)
	  for (int c = 5; c < 808; c++)
	    for (int b = 5; b < 808; b++)
	      for (int a = 5; a < 808; a++)
	      {
	        
	       A[a][b]=A[a-5][b-3]+0.737;
	        
	       A[a][b]=A[a+2][b+3]+0.38;
	      }

    return 0;
}
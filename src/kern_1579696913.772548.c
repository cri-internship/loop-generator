#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(720, 150, "ones");
	int **A = create_two_dim_int(610, 380, "ones");
	int *B = create_one_dim_int(530, "ones");

	for (int d = 0; d < 378; d++)
	  for (int c = 0; c < 527; c++)
	    for (int b = 0; b < 527; b++)
	      for (int a = 0; a < 527; a++)
	      {
	        
	       B[a]=B[a+3]*34;
	        
	       A[a][b]=A[a+5][b+2]-B[a];
	      }

    return 0;
}
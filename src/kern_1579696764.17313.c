#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(260, "ones");
	int **A = create_two_dim_int(140, 790, "ones");

	for (int d = 5; d < 790; d++)
	  for (int c = 3; c < 140; c++)
	    for (int b = 3; b < 140; b++)
	      for (int a = 3; a < 140; a++)
	      {
	        
	       A[a][b]=A[a-1][b-5]-9;
	        
	       B[a]=B[a+1]*31;
	        
	       B[a]=48;
	      }

    return 0;
}
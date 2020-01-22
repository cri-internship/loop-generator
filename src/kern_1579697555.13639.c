#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(990, "ones");
	int **A = create_two_dim_int(580, 520, "ones");

	for (int d = 0; d < 517; d++)
	  for (int c = 0; c < 578; c++)
	    for (int b = 0; b < 578; b++)
	      for (int a = 0; a < 578; a++)
	      {
	        
	       A[a][b]=0;
	       A[a+2][b+3]=14;
	      }

    return 0;
}
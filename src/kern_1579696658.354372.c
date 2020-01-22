#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(120, "zeros");
	int *C = create_one_dim_int(860, "zeros");
	int **A = create_two_dim_int(980, 610, "zeros");

	for (int d = 3; d < 610; d++)
	  for (int c = 2; c < 980; c++)
	    for (int b = 2; b < 980; b++)
	      for (int a = 2; a < 980; a++)
	      {
	        
	       A[a][b]=A[a-1][b-3]*B[a]-15;
	        
	       A[a][b]=A[a-2][b]-12;
	      }

    return 0;
}
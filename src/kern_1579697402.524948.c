#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(530, 50, "ones");
	int **B = create_two_dim_int(320, 230, "ones");

	for (int d = 5; d < 50; d++)
	  for (int c = 5; c < 320; c++)
	    for (int b = 5; b < 320; b++)
	      for (int a = 5; a < 320; a++)
	      {
	        
	       A[a][b]=A[a-2][b-4]-B[a][b];
	        
	       A[a][b]=A[a-2][b-1]+30;
	        
	       int var_a=B[a][b]-30;
	       int var_b=B[a-1][b-5]*47;
	      }

    return 0;
}
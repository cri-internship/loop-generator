#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(260, 510, "random");
	int **B = create_two_dim_int(810, 400, "random");
	int **C = create_two_dim_int(640, 920, "random");

	for (int d = 2; d < 508; d++)
	  for (int c = 1; c < 257; c++)
	    for (int b = 1; b < 257; b++)
	      for (int a = 1; a < 257; a++)
	      {
	        
	       A[a][b]=4;
	       A[a+3][b+2]=36;
	        
	       int var_a=C[a][b]-24;
	       int var_b=C[a-1][b-2]+30;
	      }

    return 0;
}
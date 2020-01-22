#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(810, 850, 1000, "ones");
	int *A = create_one_dim_int(570, "ones");
	int *B = create_one_dim_int(410, "ones");

	for (int d = 0; d < 1000; d++)
	  for (int c = 1; c < 850; c++)
	    for (int b = 3; b < 565; b++)
	      for (int a = 3; a < 565; a++)
	      {
	        
	       C[a][b][c]=43;
	       C[a-3][b-1][c]=35;
	        
	       A[a]=48;
	       A[a-1]=36;
	        
	       int var_a=A[a]*26;
	       int var_b=A[a+5]/12;
	      }

    return 0;
}
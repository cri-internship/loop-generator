#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(780, "ones");
	int ***B = create_three_dim_int(870, 310, 50, "ones");
	int *C = create_one_dim_int(970, "ones");

	for (int d = 5; d < 777; d++)
	  for (int c = 5; c < 777; c++)
	    for (int b = 5; b < 777; b++)
	      for (int a = 5; a < 777; a++)
	      {
	        
	       C[a]=A[a]*B[a][b][c];
	       C[a-5]=A[a];
	        
	       int var_a=A[a]/20;
	       int var_b=A[a+3]*31;
	        
	       int var_c=C[a]*32;
	       int var_d=C[a+4]/35;
	      }

    return 0;
}
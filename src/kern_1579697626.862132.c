#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(570, 670, "ones");
	int **A = create_two_dim_int(860, 800, "ones");
	int *C = create_one_dim_int(310, "ones");

	for (int d = 1; d < 670; d++)
	  for (int c = 2; c < 310; c++)
	    for (int b = 2; b < 310; b++)
	      for (int a = 2; a < 310; a++)
	      {
	        
	       C[a]=2;
	       float  var_a=C[a]/40;
	        
	       A[a][b]=A[a][b+3]-1;
	        
	       A[a][b]=20;
	        
	       B[a][b]=18;
	       B[a-2][b-1]=15;
	        
	       int var_b=A[a][b]-41;
	       int var_c=A[a+2][b+1]*18;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(510, "ones");
	int **B = create_two_dim_int(460, 900, "ones");

	for (int d = 0; d < 900; d++)
	  for (int c = 4; c < 457; c++)
	    for (int b = 4; b < 457; b++)
	      for (int a = 4; a < 457; a++)
	      {
	        
	       A[a]=A[a-2]-7;
	        
	       B[a][b]=B[a-4][b]/5;
	        
	       B[a][b]=B[a+3][b]+A[a];
	        
	       A[a]=A[a+4]-B[a][b];
	        
	       int var_a=A[a]-28;
	      }

    return 0;
}
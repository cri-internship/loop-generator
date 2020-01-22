#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(540, 120, "zeros");
	int *A = create_one_dim_int(300, "zeros");

	for (int d = 0; d < 120; d++)
	  for (int c = 3; c < 296; c++)
	    for (int b = 3; b < 296; b++)
	      for (int a = 3; a < 296; a++)
	      {
	        
	       A[a]=A[a-1]-48;
	        
	       A[a]=A[a+4]-0;
	        
	       B[a][b]=B[a+5][b]*16;
	        
	       B[a][b]=A[a];
	      }

    return 0;
}
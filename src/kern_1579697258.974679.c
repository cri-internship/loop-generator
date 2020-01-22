#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(850, "zeros");
	int **A = create_two_dim_int(380, 790, "zeros");

	for (int d = 5; d < 788; d++)
	  for (int c = 5; c < 379; c++)
	    for (int b = 5; b < 379; b++)
	      for (int a = 5; a < 379; a++)
	      {
	        
	       B[a]=B[a-2]/A[a][b];
	        
	       A[a][b]=A[a-1][b-5]+29;
	        
	       A[a][b]=A[a+1][b+2]+43;
	        
	       B[a]=25;
	      }

    return 0;
}
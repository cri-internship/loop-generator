#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(230, "zeros");
	int **A = create_two_dim_int(950, 50, "zeros");

	for (int d = 1; d < 50; d++)
	  for (int c = 1; c < 229; c++)
	    for (int b = 1; b < 229; b++)
	      for (int a = 1; a < 229; a++)
	      {
	        
	       A[a][b]=A[a-1][b-1]-B[a];
	        
	       B[a]=B[a+1]+14;
	        
	       A[a][b]=A[a+2][b]+B[a];
	      }

    return 0;
}
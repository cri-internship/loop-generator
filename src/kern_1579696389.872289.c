#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(780, "zeros");
	int **B = create_two_dim_int(290, 560, "zeros");
	int *A = create_one_dim_int(390, "zeros");
	int **D = create_two_dim_int(210, 950, "zeros");

	for (int d = 1; d < 950; d++)
	  for (int c = 5; c < 210; c++)
	    for (int b = 5; b < 210; b++)
	      for (int a = 5; a < 210; a++)
	      {
	        
	       D[a][b]=D[a-5][b-1]-49*A[a];
	        
	       C[a]=9;
	       C[a+3]=A[a]-B[a][b];
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(320, 730, "zeros");
	int **A = create_two_dim_int(990, 950, "zeros");
	int **B = create_two_dim_int(720, 450, "zeros");

	for (int d = 3; d < 450; d++)
	  for (int c = 4; c < 720; c++)
	    for (int b = 4; b < 720; b++)
	      for (int a = 4; a < 720; a++)
	      {
	        
	       B[a][b]=B[a-4][b]/C[a][b];
	        
	       B[a][b]=47;
	        
	       A[a][b]=B[a][b]-11;
	       A[a+5][b]=16-C[a][b];
	      }

    return 0;
}
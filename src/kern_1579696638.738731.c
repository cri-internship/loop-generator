#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(80, 140, "zeros");
	int **B = create_two_dim_int(650, 720, "zeros");
	int **C = create_two_dim_int(970, 330, "zeros");

	for (int d = 5; d < 330; d++)
	  for (int c = 2; c < 970; c++)
	    for (int b = 2; b < 970; b++)
	      for (int a = 2; a < 970; a++)
	      {
	        
	       C[a][b]=C[a][b-5]/A[a][b]-B[a][b];
	        
	       C[a][b]=C[a-2][b-3]/15;
	      }

    return 0;
}
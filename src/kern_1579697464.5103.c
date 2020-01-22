#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(530, "zeros");
	int *C = create_one_dim_int(990, "zeros");
	int *D = create_one_dim_int(900, "zeros");
	int ***A = create_three_dim_int(410, 130, 90, "zeros");

	for (int d = 4; d < 900; d++)
	  for (int c = 4; c < 900; c++)
	    for (int b = 4; b < 900; b++)
	      for (int a = 4; a < 900; a++)
	      {
	        
	       C[a]=C[a-4]/22;
	        
	       D[a]=C[a]*B[a];
	       D[a-4]=A[a][b][c]/17;
	      }

    return 0;
}
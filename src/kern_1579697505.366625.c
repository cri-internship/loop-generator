#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(570, 510, "zeros");
	int *B = create_one_dim_int(940, "zeros");
	int ***A = create_three_dim_int(980, 880, 460, "zeros");

	for (int d = 2; d < 506; d++)
	  for (int c = 5; c < 566; c++)
	    for (int b = 5; b < 566; b++)
	      for (int a = 5; a < 566; a++)
	      {
	        
	       C[a][b]=C[a-5][b-2]/A[a][b][c];
	        
	       C[a][b]=B[a];
	      }

    return 0;
}
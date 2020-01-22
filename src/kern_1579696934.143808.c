#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(410, "zeros");
	int **D = create_two_dim_int(920, 670, "zeros");
	int **E = create_two_dim_int(410, 220, "zeros");
	int *A = create_one_dim_int(690, "zeros");
	int **C = create_two_dim_int(200, 20, "zeros");

	for (int d = 5; d < 690; d++)
	  for (int c = 5; c < 690; c++)
	    for (int b = 5; b < 690; b++)
	      for (int a = 5; a < 690; a++)
	      {
	        
	       A[a]=A[a-5]-D[a][b];
	      }

    return 0;
}
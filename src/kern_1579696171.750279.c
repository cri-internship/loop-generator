#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(730, 570, 870, "random");
	int **C = create_two_dim_int(830, 40, "random");
	int *A = create_one_dim_int(50, "random");

	for (int d = 4; d < 870; d++)
	  for (int c = 5; c < 570; c++)
	    for (int b = 4; b < 50; b++)
	      for (int a = 4; a < 50; a++)
	      {
	        
	       B[a][b][c]=B[a][b-5][c-4]/C[a][b]-A[a];
	        
	       A[a]=A[a-4]/46;
	      }

    return 0;
}
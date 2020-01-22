#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(210, "random");
	int **A = create_two_dim_int(430, 400, "random");
	int ***C = create_three_dim_int(520, 590, 820, "random");

	for (int d = 5; d < 400; d++)
	  for (int c = 4; c < 430; c++)
	    for (int b = 4; b < 430; b++)
	      for (int a = 4; a < 430; a++)
	      {
	        
	       A[a][b]=A[a-4][b-4]/C[a][b][c];
	        
	       A[a][b]=B[a];
	      }

    return 0;
}
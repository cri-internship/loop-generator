#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(950, 430, 940, "random");
	int *B = create_one_dim_int(430, "random");

	for (int d = 1; d < 940; d++)
	  for (int c = 5; c < 430; c++)
	    for (int b = 1; b < 950; b++)
	      for (int a = 1; a < 950; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-5][c-1]*B[a];
	      }

    return 0;
}
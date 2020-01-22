#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(790, "random");
	int ***A = create_three_dim_int(410, 190, 240, "random");

	for (int d = 3; d < 240; d++)
	  for (int c = 3; c < 190; c++)
	    for (int b = 0; b < 410; b++)
	      for (int a = 0; a < 410; a++)
	      {
	        
	       A[a][b][c]=A[a][b-3][c-3]+20;
	      }

    return 0;
}
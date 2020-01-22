#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(260, 520, "random");
	int ***A = create_three_dim_int(880, 380, 920, "random");

	for (int d = 4; d < 920; d++)
	  for (int c = 3; c < 380; c++)
	    for (int b = 3; b < 880; b++)
	      for (int a = 3; a < 880; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c-1]*30;
	        
	       A[a][b][c]=9;
	      }

    return 0;
}
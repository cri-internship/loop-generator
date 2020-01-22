#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(10, 770, "random");
	int ***A = create_three_dim_int(580, 610, 170, "random");

	for (int d = 4; d < 170; d++)
	  for (int c = 0; c < 610; c++)
	    for (int b = 3; b < 580; b++)
	      for (int a = 3; a < 580; a++)
	      {
	        
	       A[a][b][c]=B[a][b];
	       A[a-3][b][c-4]=B[a][b];
	      }

    return 0;
}
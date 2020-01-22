#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(460, 200, 300, "random");
	int **B = create_two_dim_int(270, 490, "random");
	int **C = create_two_dim_int(430, 160, "random");

	for (int d = 2; d < 300; d++)
	  for (int c = 3; c < 200; c++)
	    for (int b = 3; b < 460; b++)
	      for (int a = 3; a < 460; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c-2]*B[a][b];
	      }

    return 0;
}
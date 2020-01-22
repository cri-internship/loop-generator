#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(110, "zeros");
	int ***C = create_three_dim_int(970, 540, 230, "zeros");
	int ***A = create_three_dim_int(410, 510, 360, "zeros");
	int **B = create_two_dim_int(130, 230, "zeros");

	for (int d = 0; d < 356; d++)
	  for (int c = 0; c < 505; c++)
	    for (int b = 0; b < 405; b++)
	      for (int a = 0; a < 405; a++)
	      {
	        
	       A[a][b][c]=34;
	       A[a+5][b+5][c+4]=16;
	      }

    return 0;
}
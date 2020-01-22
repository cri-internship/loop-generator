#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(990, 230, "ones");
	int *B = create_one_dim_int(390, "ones");
	int **C = create_two_dim_int(120, 510, "ones");
	int **A = create_two_dim_int(440, 210, "ones");
	int ***E = create_three_dim_int(10, 450, 910, "ones");

	for (int d = 2; d < 910; d++)
	  for (int c = 1; c < 450; c++)
	    for (int b = 1; b < 10; b++)
	      for (int a = 1; a < 10; a++)
	      {
	        
	       E[a][b][c]=E[a-1][b-1][c-2]*20;
	      }

    return 0;
}
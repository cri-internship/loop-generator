#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(370, 540, "zeros");
	int ***A = create_three_dim_int(1000, 310, 500, "zeros");
	int *B = create_one_dim_int(790, "zeros");
	int **C = create_two_dim_int(730, 650, "zeros");

	for (int d = 5; d < 540; d++)
	  for (int c = 2; c < 370; c++)
	    for (int b = 2; b < 370; b++)
	      for (int a = 2; a < 370; a++)
	      {
	        
	       D[a][b]=D[a-2][b-5]+9;
	      }

    return 0;
}
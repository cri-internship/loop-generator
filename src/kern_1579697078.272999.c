#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(330, "zeros");
	int ***D = create_three_dim_int(170, 530, 510, "zeros");
	int **B = create_two_dim_int(730, 700, "zeros");
	int **A = create_two_dim_int(900, 420, "zeros");

	for (int d = 0; d < 697; d++)
	  for (int c = 0; c < 727; c++)
	    for (int b = 0; b < 727; b++)
	      for (int a = 0; a < 727; a++)
	      {
	        
	       B[a][b]=B[a+3][b+3]/31;
	      }

    return 0;
}
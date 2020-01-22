#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(900, "random");
	int **B = create_two_dim_int(760, 580, "random");
	int ***A = create_three_dim_int(250, 770, 980, "random");

	for (int d = 0; d < 977; d++)
	  for (int c = 0; c < 766; c++)
	    for (int b = 0; b < 248; b++)
	      for (int a = 0; a < 248; a++)
	      {
	        
	       B[a][b]=A[a][b][c]*B[a][b]/C[a];
	       C[a]=A[a+2][b+4][c+3]+C[a]*B[a][b];
	      }

    return 0;
}
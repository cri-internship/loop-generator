#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(1000, 730, "random");
	int **D = create_two_dim_int(540, 390, "random");
	int **C = create_two_dim_int(830, 540, "random");
	int ***A = create_three_dim_int(890, 210, 770, "random");

	for (int d = 0; d < 538; d++)
	  for (int c = 0; c < 826; c++)
	    for (int b = 0; b < 826; b++)
	      for (int a = 0; a < 826; a++)
	      {
	        
	       C[a][b]=C[a+4][b+2]*A[a][b][c]+B[a][b]-D[a][b];
	      }

    return 0;
}
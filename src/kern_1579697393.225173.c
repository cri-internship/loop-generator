#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(380, 730, 860, "random");
	int *C = create_one_dim_int(110, "random");
	int **A = create_two_dim_int(590, 460, "random");
	int **B = create_two_dim_int(180, 870, "random");

	for (int d = 0; d < 870; d++)
	  for (int c = 3; c < 110; c++)
	    for (int b = 3; b < 110; b++)
	      for (int a = 3; a < 110; a++)
	      {
	        
	       B[a][b]=B[a-3][b]+C[a]/D[a][b][c];
	        
	       C[a]=C[a]/B[a][b]*A[a][b]-B[a][b];
	       A[a][b]=C[a-1]*B[a][b]+41;
	      }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(170, "zeros");
	int **A = create_two_dim_int(40, 100, "zeros");
	int ***D = create_three_dim_int(570, 480, 140, "zeros");
	int **B = create_two_dim_int(660, 720, "zeros");

	for (int d = 0; d < 170; d++)
	  for (int c = 0; c < 170; c++)
	    for (int b = 0; b < 170; b++)
	      for (int a = 0; a < 170; a++)
	      {
	        
	       C[a]=C[a]+D[a][b][c]*1;
	       B[a][b]=C[a]/46-B[a][b];
	      }

    return 0;
}
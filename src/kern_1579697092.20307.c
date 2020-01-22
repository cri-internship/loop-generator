#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(400, 850, "zeros");
	int **A = create_two_dim_int(960, 940, "zeros");
	int **B = create_two_dim_int(750, 100, "zeros");
	int ***E = create_three_dim_int(740, 10, 570, "zeros");
	int ***D = create_three_dim_int(500, 140, 880, "zeros");

	for (int d = 0; d < 850; d++)
	  for (int c = 1; c < 400; c++)
	    for (int b = 1; b < 400; b++)
	      for (int a = 1; a < 400; a++)
	      {
	        
	       C[a][b]=C[a-1][b]-A[a][b]*D[a][b][c];
	      }

    return 0;
}
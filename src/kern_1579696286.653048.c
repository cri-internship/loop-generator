#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(740, 150, "zeros");
	int *C = create_one_dim_int(960, "zeros");
	int ***B = create_three_dim_int(170, 690, 40, "zeros");
	int ***D = create_three_dim_int(570, 600, 620, "zeros");

	for (int d = 4; d < 39; d++)
	  for (int c = 2; c < 685; c++)
	    for (int b = 1; b < 169; b++)
	      for (int a = 1; a < 169; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+5][c+1]/A[a][b]+C[a];
	        
	       B[a][b][c]=10;
	      }

    return 0;
}
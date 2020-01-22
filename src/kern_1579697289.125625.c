#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(580, 290, 680, "zeros");
	int *A = create_one_dim_int(40, "zeros");
	int *C = create_one_dim_int(570, "zeros");
	int *B = create_one_dim_int(700, "zeros");

	for (int d = 2; d < 700; d++)
	  for (int c = 2; c < 700; c++)
	    for (int b = 2; b < 700; b++)
	      for (int a = 2; a < 700; a++)
	      {
	        
	       B[a]=D[a][b][c]*C[a]+A[a];
	       B[a-2]=D[a][b][c];
	      }

    return 0;
}
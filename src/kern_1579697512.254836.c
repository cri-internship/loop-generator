#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(350, "zeros");
	int *A = create_one_dim_int(960, "zeros");
	int ***B = create_three_dim_int(410, 820, 600, "zeros");
	int **D = create_two_dim_int(420, 970, "zeros");

	for (int d = 0; d < 596; d++)
	  for (int c = 0; c < 816; c++)
	    for (int b = 3; b < 409; b++)
	      for (int a = 3; a < 409; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+4][c+4]*C[a];
	        
	       int var_a=A[a]*42;
	       int var_b=A[a-3]-45;
	      }

    return 0;
}
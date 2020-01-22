#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(380, "zeros");
	int ***A = create_three_dim_int(250, 960, 600, "zeros");
	int ***D = create_three_dim_int(430, 870, 180, "zeros");
	int ***B = create_three_dim_int(370, 70, 130, "zeros");

	for (int d = 5; d < 180; d++)
	  for (int c = 4; c < 870; c++)
	    for (int b = 5; b < 430; b++)
	      for (int a = 5; a < 430; a++)
	      {
	        
	       D[a][b][c]=D[a-5][b][c-5]+50*C[a]-A[a][b][c];
	        
	       int var_a=D[a][b][c]-5;
	       int var_b=D[a-1][b-4][c-3]/50;
	      }

    return 0;
}
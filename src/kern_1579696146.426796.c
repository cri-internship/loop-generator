#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(610, "ones");
	int ***B = create_three_dim_int(600, 220, 730, "ones");
	int *C = create_one_dim_int(560, "ones");
	int ***A = create_three_dim_int(780, 120, 870, "ones");
	int **D = create_two_dim_int(130, 750, "ones");

	for (int d = 5; d < 730; d++)
	  for (int c = 3; c < 115; c++)
	    for (int b = 4; b < 560; b++)
	      for (int a = 4; a < 560; a++)
	      {
	        
	       C[a]=C[a-4]-6;
	        
	       A[a][b][c]=A[a+4][b+5][c]+34/B[a][b][c];
	        
	       B[a][b][c]=E[a]/A[a][b][c];
	       B[a-1][b-3][c-5]=D[a][b]/C[a]-D[a][b]*E[a];
	        
	       int var_a=E[a]*48;
	       int var_b=E[a-2]*14;
	      }

    return 0;
}
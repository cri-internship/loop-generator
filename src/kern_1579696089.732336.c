#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(980, 850, 790, "ones");
	int *A = create_one_dim_int(770, "ones");
	int ***B = create_three_dim_int(450, 860, 360, "ones");
	int ***C = create_three_dim_int(680, 930, 680, "ones");

	for (int d = 4; d < 360; d++)
	  for (int c = 4; c < 850; c++)
	    for (int b = 3; b < 450; b++)
	      for (int a = 3; a < 450; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-3][c-1]+A[a]/D[a][b][c];
	        
	       D[a][b][c]=D[a][b-4][c]/B[a][b][c];
	        
	       C[a][b][c]=C[a][b-1][c-4]/B[a][b][c]*A[a];
	        
	       int var_a=D[a][b][c]+14;
	       int var_b=D[a-2][b-3][c-3]+9;
	      }

    return 0;
}
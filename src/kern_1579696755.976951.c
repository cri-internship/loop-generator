#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(970, 650, 650, "zeros");
	int ***C = create_three_dim_int(200, 580, 400, "zeros");
	int **A = create_two_dim_int(500, 200, "zeros");
	int ***D = create_three_dim_int(320, 700, 240, "zeros");

	for (int d = 4; d < 400; d++)
	  for (int c = 4; c < 199; c++)
	    for (int b = 4; b < 200; b++)
	      for (int a = 4; a < 200; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-3][c-4]+23;
	        
	       B[a][b][c]=C[a][b][c]*27;
	        
	       int var_a=A[a][b]+10;
	       int var_b=A[a+2][b+1]/27;
	        
	       int var_c=C[a][b][c]/33;
	       int var_d=C[a-3][b][c-4]+20;
	      }

    return 0;
}
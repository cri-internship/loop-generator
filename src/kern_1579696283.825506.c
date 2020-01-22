#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(340, 320, 280, "ones");
	int ***C = create_three_dim_int(300, 290, 240, "ones");
	int *A = create_one_dim_int(240, "ones");
	int *D = create_one_dim_int(640, "ones");

	for (int c = 4; c < 275; c++)
	  for (int b = 4; b < 317; b++)
	    for (int a = 3; a < 240; a++)
	    {
	      
	      A[a]=28;
	      float  var_a=A[a]/34;
	      
	      D[a]=D[a-3]*B[a][b][c]-A[a]/C[a][b][c];
	      
	      B[a][b][c]=B[a-2][b-4][c-4]-D[a]/45*A[a];
	      
	      int var_b=A[a]/41;
	      A[a]=45;
	      
	      B[a][b][c]=B[a+2][b+3][c+5]/12;
	    }

    return 0;
}
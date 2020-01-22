#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(150, "ones");
	int **B = create_two_dim_int(170, 710, "ones");
	int ***C = create_three_dim_int(440, 60, 720, "ones");

	for (int c = 4; c < 720; c++)
	  for (int b = 4; b < 60; b++)
	    for (int a = 4; a < 145; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-1][c-4]*43;
	      
	      A[a]=A[a+5]*0/B[a][b];
	      
	      B[a][b]=47;
	      B[a-2][b-3]=A[a]/C[a][b][c];
	      
	      int var_a=B[a][b]*9;
	      int var_b=B[a-2][b-4]-25;
	      
	      int var_c=A[a]*28;
	      int var_d=A[a-3]/35;
	      
	      C[a][b][c]=A[a]*B[a][b];
	    }

    return 0;
}
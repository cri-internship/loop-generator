#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(530, "ones");
	int ***B = create_three_dim_int(600, 670, 170, "ones");
	int **E = create_two_dim_int(940, 140, "ones");
	int ***A = create_three_dim_int(120, 170, 300, "ones");
	int *C = create_one_dim_int(740, "ones");

	for (int c = 0; c < 167; c++)
	  for (int b = 0; b < 666; b++)
	    for (int a = 3; a < 530; a++)
	    {
	      
	      D[a]=D[a-3]+3;
	      
	      C[a]=A[a][b][c]*E[a][b]/D[a]-B[a][b][c];
	      C[a-1]=D[a]/A[a][b][c];
	      
	      int var_a=B[a][b][c]*50;
	      int var_b=B[a+1][b+4][c+3]*19;
	    }

    return 0;
}
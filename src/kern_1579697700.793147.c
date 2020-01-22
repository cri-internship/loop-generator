#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(710, 120, 870, "zeros");
	int *A = create_one_dim_int(450, "zeros");
	int ***B = create_three_dim_int(550, 480, 770, "zeros");
	int **E = create_two_dim_int(830, 170, "zeros");
	int ***C = create_three_dim_int(180, 790, 280, "zeros");

	for (int c = 4; c < 767; c++)
	  for (int b = 2; b < 119; b++)
	    for (int a = 2; a < 547; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-2][c-4]*E[a][b];
	      
	      D[a][b][c]=D[a][b-1][c]*35;
	      
	      B[a][b][c]=B[a+3][b][c+3]/C[a][b][c]-D[a][b][c]+A[a]*D[a][b][c];
	      
	      int var_a=D[a][b][c]/42;
	      int var_b=D[a+3][b+1][c]+32;
	    }

    return 0;
}
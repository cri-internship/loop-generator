#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(360, "ones");
	int **B = create_two_dim_int(90, 130, "ones");
	int ***A = create_three_dim_int(390, 290, 80, "ones");
	int ***C = create_three_dim_int(860, 950, 270, "ones");

	for (int c = 3; c < 270; c++)
	  for (int b = 5; b < 130; b++)
	    for (int a = 5; a < 90; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-5][c-3]*43;
	      
	      B[a][b]=B[a-1][b-2]-35;
	      
	      D[a]=1;
	      D[a+3]=A[a][b][c]*C[a][b][c];
	      
	      B[a][b]=18;
	      
	      C[a][b][c]=D[a]-D[a]*A[a][b][c];
	      
	      D[a]=D[a]-15;
	      A[a][b][c]=D[a+5]*B[a][b]+C[a][b][c]/A[a][b][c];
	      
	      int var_a=C[a][b][c]+31;
	      int var_b=C[a+1][b+4][c]*4;
	    }

    return 0;
}
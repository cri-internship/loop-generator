#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(970, 480, 950, "zeros");
	int *E = create_one_dim_int(110, "zeros");
	int *D = create_one_dim_int(830, "zeros");
	int *B = create_one_dim_int(450, "zeros");
	int ***A = create_three_dim_int(600, 960, 280, "zeros");

	for (int c = 0; c < 275; c++)
	  for (int b = 0; b < 960; b++)
	    for (int a = 2; a < 108; a++)
	    {
	      
	      D[a]=D[a-1]-A[a][b][c]*C[a][b][c]/B[a]+E[a];
	      
	      E[a]=E[a+2]-D[a]+13;
	      
	      B[a]=B[a+1]-26/C[a][b][c]+A[a][b][c]*D[a];
	      
	      B[a]=B[a+3]*C[a][b][c]/A[a][b][c]+E[a];
	      
	      A[a][b][c]=34;
	      A[a+4][b][c+5]=15;
	      
	      int var_a=B[a]-47;
	      int var_b=B[a-2]-3;
	    }

    return 0;
}
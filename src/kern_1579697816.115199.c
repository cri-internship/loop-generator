#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(550, "ones");
	int ***C = create_three_dim_int(210, 380, 930, "ones");
	int **D = create_two_dim_int(250, 780, "ones");
	int *A = create_one_dim_int(440, "ones");
	int ***B = create_three_dim_int(260, 370, 660, "ones");

	for (int c = 4; c < 660; c++)
	  for (int b = 1; b < 370; b++)
	    for (int a = 3; a < 205; a++)
	    {
	      
	      A[a]=A[a+5]*C[a][b][c];
	      
	      int var_a=B[a][b][c]/37;
	      int var_b=B[a-3][b-1][c-4]+42;
	      
	      C[a][b][c]=C[a][b][c]/B[a][b][c]-50+D[a][b]*A[a];
	      D[a][b]=C[a+5][b+4][c+5]*E[a];
	    }

    return 0;
}
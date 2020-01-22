#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(730, 680, "random");
	int **D = create_two_dim_int(270, 980, "random");
	int ***A = create_three_dim_int(180, 310, 620, "random");
	int ***C = create_three_dim_int(290, 470, 250, "random");

	for (int c = 3; c < 250; c++)
	  for (int b = 3; b < 305; b++)
	    for (int a = 5; a < 175; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-3][c-3]+32;
	      
	      C[a][b][c]=C[a-4][b][c-1]/B[a][b];
	      
	      A[a][b][c]=C[a][b][c]-A[a][b][c];
	      B[a][b]=C[a-5][b-2][c-2]-D[a][b];
	      
	      int var_a=A[a][b][c]+3;
	      int var_b=A[a+5][b+5][c+1]-5;
	    }

    return 0;
}
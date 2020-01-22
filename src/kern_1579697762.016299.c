#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(110, 160, "zeros");
	int ***C = create_three_dim_int(510, 350, 320, "zeros");
	int ***A = create_three_dim_int(320, 90, 750, "zeros");
	int ***E = create_three_dim_int(540, 770, 600, "zeros");
	int **D = create_two_dim_int(60, 20, "zeros");

	for (int c = 3; c < 750; c++)
	  for (int b = 5; b < 15; b++)
	    for (int a = 5; a < 59; a++)
	    {
	      
	      D[a][b]=D[a-2][b]/34;
	      
	      A[a][b][c]=A[a-1][b-5][c-3]*41;
	      
	      D[a][b]=D[a+1][b+5]-B[a][b]+E[a][b][c]*C[a][b][c]/6;
	      
	      A[a][b][c]=D[a][b]/B[a][b]*C[a][b][c];
	      C[a][b][c]=D[a-5][b-5]-E[a][b][c];
	    }

    return 0;
}
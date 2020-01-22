#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(530, 20, "random");
	int ***E = create_three_dim_int(310, 560, 710, "random");
	int ***D = create_three_dim_int(790, 740, 70, "random");
	int *A = create_one_dim_int(650, "random");
	int **B = create_two_dim_int(820, 80, "random");

	for (int c = 3; c < 66; c++)
	  for (int b = 4; b < 17; b++)
	    for (int a = 5; a < 310; a++)
	    {
	      
	      A[a]=A[a-5]*C[a][b]+D[a][b][c];
	      
	      E[a][b][c]=E[a-2][b][c-3]/17;
	      
	      C[a][b]=C[a+1][b+3]+30;
	      
	      D[a][b][c]=D[a+1][b][c+4]*E[a][b][c]/42+A[a]-E[a][b][c];
	      
	      D[a][b][c]=27;
	      
	      C[a][b]=B[a][b];
	    }

    return 0;
}
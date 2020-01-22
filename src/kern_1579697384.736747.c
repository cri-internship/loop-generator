#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(980, 740, 1000, "random");
	int *B = create_one_dim_int(660, "random");
	int **C = create_two_dim_int(100, 570, "random");
	int ***E = create_three_dim_int(680, 230, 680, "random");
	int **D = create_two_dim_int(460, 740, "random");

	for (int c = 0; c < 680; c++)
	  for (int b = 4; b < 230; b++)
	    for (int a = 5; a < 660; a++)
	    {
	      
	      E[a][b][c]=E[a-1][b-4][c]*2;
	      
	      E[a][b][c]=B[a]+D[a][b]*A[a][b][c]/C[a][b]-E[a][b][c];
	      B[a]=B[a-5]/A[a][b][c]-D[a][b]+E[a][b][c];
	    }

    return 0;
}
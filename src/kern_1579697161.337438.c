#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(300, "zeros");
	int **A = create_two_dim_int(540, 100, "zeros");
	int ***D = create_three_dim_int(150, 530, 230, "zeros");
	int **B = create_two_dim_int(330, 290, "zeros");

	for (int c = 1; c < 230; c++)
	  for (int b = 5; b < 95; b++)
	    for (int a = 3; a < 150; a++)
	    {
	      
	      D[a][b][c]=D[a-3][b-2][c-1]-C[a]+A[a][b]/B[a][b];
	      
	      B[a][b]=A[a][b]-2*B[a][b];
	      D[a][b][c]=A[a+1][b+5]*D[a][b][c]+C[a]-B[a][b];
	      
	      C[a]=D[a][b][c]/B[a][b]+A[a][b];
	      A[a][b]=D[a-2][b-5][c-1]/C[a];
	    }

    return 0;
}
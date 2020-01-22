#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(530, 950, 480, "zeros");
	int *D = create_one_dim_int(880, "zeros");
	int **A = create_two_dim_int(480, 940, "zeros");
	int **B = create_two_dim_int(680, 10, "zeros");

	for (int c = 0; c < 480; c++)
	  for (int b = 5; b < 10; b++)
	    for (int a = 4; a < 477; a++)
	    {
	      
	      A[a][b]=A[a-2][b-5]-7;
	      
	      C[a][b][c]=C[a-4][b-2][c]+9;
	      
	      A[a][b]=A[a+3][b]*22;
	      
	      D[a]=10;
	      D[a-1]=44;
	      
	      B[a][b]=A[a][b]*B[a][b];
	      C[a][b][c]=A[a+3][b+3]*C[a][b][c]/D[a];
	      
	      A[a][b]=C[a][b][c]/A[a][b];
	      D[a]=C[a][b+5][c]-D[a]+A[a][b];
	      
	      int var_a=B[a][b]/14;
	      int var_b=B[a+3][b]-27;
	    }

    return 0;
}
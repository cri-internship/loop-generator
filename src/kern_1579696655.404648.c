#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(880, 730, 930, "ones");
	int **E = create_two_dim_int(530, 110, "ones");
	int **D = create_two_dim_int(570, 1000, "ones");
	int ***B = create_three_dim_int(940, 970, 690, "ones");
	int *A = create_one_dim_int(860, "ones");

	for (int c = 5; c < 689; c++)
	  for (int b = 3; b < 730; b++)
	    for (int a = 5; a < 856; a++)
	    {
	      
	      A[a]=A[a+4]*36;
	      
	      B[a][b][c]=B[a+5][b+4][c+1]/0;
	      
	      A[a]=20;
	      
	      A[a]=C[a][b][c]/A[a]-B[a][b][c]*D[a][b];
	      B[a][b][c]=C[a-5][b-3][c]+D[a][b]-E[a][b]*B[a][b][c]/A[a];
	      
	      D[a][b]=B[a][b][c]*A[a]+D[a][b];
	      E[a][b]=B[a-1][b-2][c-5]/C[a][b][c]-E[a][b]*A[a]+D[a][b];
	    }

    return 0;
}
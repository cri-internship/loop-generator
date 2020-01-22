#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(710, "ones");
	int ***A = create_three_dim_int(880, 530, 400, "ones");
	int **D = create_two_dim_int(550, 550, "ones");
	int *C = create_one_dim_int(900, "ones");

	for (int c = 0; c < 400; c++)
	  for (int b = 4; b < 530; b++)
	    for (int a = 3; a < 709; a++)
	    {
	      
	      A[a][b][c]=A[a][b-4][c]/0;
	      
	      C[a]=C[a+5]/D[a][b]*A[a][b][c];
	      
	      B[a]=B[a]+C[a]/A[a][b][c]-D[a][b];
	      B[a]=A[a][b][c]+C[a]*D[a][b];
	      
	      A[a][b][c]=B[a]+A[a][b][c]-D[a][b];
	      D[a][b]=B[a-2]+C[a]*29-A[a][b][c];
	      
	      D[a][b]=B[a]+A[a][b][c]-C[a]*D[a][b];
	      A[a][b][c]=B[a+1]/A[a][b][c];
	    }

    return 0;
}
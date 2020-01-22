#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(310, 980, "ones");
	int *D = create_one_dim_int(470, "ones");
	int **A = create_two_dim_int(170, 140, "ones");
	int ***C = create_three_dim_int(230, 230, 710, "ones");

	for (int c = 0; c < 710; c++)
	  for (int b = 3; b < 140; b++)
	    for (int a = 4; a < 170; a++)
	    {
	      
	      A[a][b]=33;
	      float  var_a=A[a][b]-42;
	      
	      C[a][b][c]=C[a+1][b][c]*B[a][b]/26;
	      
	      D[a]=14;
	      D[a+3]=1;
	      
	      A[a][b]=A[a][b]+C[a][b][c]/B[a][b]-D[a];
	      B[a][b]=A[a][b-3]+C[a][b][c];
	      
	      D[a]=D[a]+A[a][b]-C[a][b][c]/B[a][b];
	      C[a][b][c]=D[a-4]*C[a][b][c]/A[a][b]-B[a][b];
	    }

    return 0;
}
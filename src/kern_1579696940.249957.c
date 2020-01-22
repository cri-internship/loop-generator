#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(550, 520, "ones");
	float **A = create_two_dim_float(380, 590, "ones");
	float ***E = create_three_dim_float(480, 500, 690, "ones");
	float ***D = create_three_dim_float(40, 660, 180, "ones");
	float ***B = create_three_dim_float(980, 490, 190, "ones");

	for (int c = 4; c < 177; c++)
	  for (int b = 5; b < 490; b++)
	    for (int a = 5; a < 37; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-5][c-4]+A[a][b]-E[a][b][c]/D[a][b][c]*C[a][b];
	      
	      E[a][b][c]=E[a-5][b-4][c-4]/0.416;
	      
	      A[a][b]=A[a][b+4]-0.746;
	      
	      E[a][b][c]=B[a][b][c]/B[a][b][c];
	      
	      A[a][b]=D[a][b][c]/0.165*B[a][b][c];
	      D[a][b][c]=D[a+3][b+5][c+3]*A[a][b]+E[a][b][c]/B[a][b][c];
	      
	      C[a][b]=E[a][b][c]-B[a][b][c]*A[a][b];
	      B[a][b][c]=E[a+1][b+1][c+1]+0.159;
	    }

    return 0;
}
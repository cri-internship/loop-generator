#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(520, 380, "ones");
	float ***B = create_three_dim_float(870, 190, 960, "ones");
	float ***A = create_three_dim_float(860, 790, 40, "ones");
	float ***E = create_three_dim_float(100, 980, 450, "ones");
	float ***D = create_three_dim_float(260, 940, 820, "ones");

	for (int c = 4; c < 40; c++)
	  for (int b = 5; b < 377; b++)
	    for (int a = 5; a < 255; a++)
	    {
	      
	      D[a][b][c]=D[a-4][b-2][c-3]/0.56;
	      
	      D[a][b][c]=D[a-5][b-5][c-2]+0.571/A[a][b][c]*B[a][b][c];
	      
	      D[a][b][c]=D[a+5][b+1][c+1]*C[a][b]+A[a][b][c]-E[a][b][c]/B[a][b][c];
	      
	      C[a][b]=C[a+2][b+3]+D[a][b][c]-D[a][b][c];
	      
	      A[a][b][c]=0.156;
	      A[a-3][b-5][c-4]=0.772;
	    }

    return 0;
}
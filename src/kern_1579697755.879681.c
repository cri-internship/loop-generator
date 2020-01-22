#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(900, 470, "zeros");
	float **B = create_two_dim_float(890, 910, "zeros");
	float *E = create_one_dim_float(870, "zeros");
	float ***D = create_three_dim_float(710, 10, 520, "zeros");
	float ***A = create_three_dim_float(380, 1000, 520, "zeros");

	for (int c = 5; c < 519; c++)
	  for (int b = 4; b < 10; b++)
	    for (int a = 4; a < 379; a++)
	    {
	      
	      C[a][b]=C[a-4][b-2]*0.382;
	      
	      A[a][b][c]=A[a+1][b+2][c+1]+D[a][b][c]*C[a][b]/B[a][b]-E[a];
	      
	      B[a][b]=B[a+4][b+3]/0.678;
	      
	      D[a][b][c]=0.818;
	      D[a-1][b-1][c-5]=0.964;
	      
	      A[a][b][c]=0.19;
	      
	      E[a]=0.288+A[a][b][c]-C[a][b];
	      E[a-2]=D[a][b][c]+A[a][b][c];
	      
	      E[a]=A[a][b][c]+C[a][b];
	      B[a][b]=A[a+1][b+4][c]+B[a][b]*E[a];
	    }

    return 0;
}
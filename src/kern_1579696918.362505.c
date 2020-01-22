#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(290, 980, "zeros");
	float ***D = create_three_dim_float(900, 680, 650, "zeros");
	float ***A = create_three_dim_float(340, 470, 240, "zeros");
	float **B = create_two_dim_float(980, 370, "zeros");
	float *C = create_one_dim_float(920, "zeros");

	for (int c = 5; c < 240; c++)
	  for (int b = 5; b < 470; b++)
	    for (int a = 5; a < 340; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-1][c-3]/D[a][b][c];
	      
	      E[a][b]=C[a]+E[a][b]*0.408;
	      C[a]=A[a][b][c]/E[a][b];
	      
	      D[a][b][c]=0.312;
	      D[a-5][b][c-5]=0.941;
	      
	      D[a][b][c]=A[a][b][c]*0.812;
	      A[a][b][c]=A[a-3][b-5][c-3]*0.233;
	      
	      B[a][b]=C[a]/E[a][b]-D[a][b][c];
	      C[a]=C[a+4]/D[a][b][c]+B[a][b];
	    }

    return 0;
}
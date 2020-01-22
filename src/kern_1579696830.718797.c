#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(380, 440, "zeros");
	float ***C = create_three_dim_float(90, 890, 50, "zeros");
	float ***B = create_three_dim_float(210, 490, 650, "zeros");
	float *D = create_one_dim_float(960, "zeros");

	for (int c = 4; c < 45; c++)
	  for (int b = 4; b < 440; b++)
	    for (int a = 5; a < 86; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-4][c-4]+0.175;
	      
	      C[a][b][c]=C[a+4][b][c+2]*A[a][b]/D[a]-B[a][b][c];
	      
	      C[a][b][c]=0.968;
	      
	      A[a][b]=0.008;
	      A[a][b]=0.267;
	      
	      D[a]=0.719;
	      D[a-5]=0.671;
	    }

    return 0;
}
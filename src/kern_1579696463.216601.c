#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(670, 880, 840, "zeros");
	float **C = create_two_dim_float(230, 570, "zeros");
	float **B = create_two_dim_float(80, 230, "zeros");

	for (int c = 3; c < 840; c++)
	  for (int b = 3; b < 226; b++)
	    for (int a = 5; a < 76; a++)
	    {
	      
	      A[a][b][c]=B[a][b]-C[a][b];
	      A[a-5][b][c-3]=0.433-B[a][b];
	      
	      B[a][b]=0.866;
	      B[a+4][b+4]=0.81;
	      
	      B[a][b]=A[a][b][c]-A[a][b][c];
	      
	      B[a][b]=C[a][b]/A[a][b][c];
	      A[a][b][c]=C[a-3][b-3]/A[a][b][c];
	    }

    return 0;
}
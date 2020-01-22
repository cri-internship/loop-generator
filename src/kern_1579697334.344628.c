#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(270, 130, 100, "random");
	float ***C = create_three_dim_float(340, 170, 390, "random");
	float ***B = create_three_dim_float(870, 410, 640, "random");

	for (int c = 4; c < 98; c++)
	  for (int b = 5; b < 125; b++)
	    for (int a = 5; a < 270; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-5][c-4]-A[a][b][c];
	      
	      A[a][b][c]=A[a][b-1][c]+0.908;
	      
	      A[a][b][c]=A[a-3][b-2][c-2]-0.716*B[a][b][c];
	      
	      A[a][b][c]=A[a][b+5][c+2]-0.729;
	      
	      B[a][b][c]=C[a][b][c]+B[a][b][c]-A[a][b][c];
	      C[a][b][c]=C[a-2][b-4][c-2]/0.351;
	    }

    return 0;
}
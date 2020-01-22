#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(280, 170, 10, "zeros");
	float **C = create_two_dim_float(240, 720, "zeros");
	float ***B = create_three_dim_float(530, 130, 770, "zeros");

	for (int c = 4; c < 7; c++)
	  for (int b = 2; b < 168; b++)
	    for (int a = 4; a < 240; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b][c-4]/0.834;
	      
	      A[a][b][c]=A[a+4][b+2][c+3]*0.708;
	      
	      C[a][b]=A[a][b][c];
	      C[a-2][b]=B[a][b][c]*B[a][b][c];
	      
	      B[a][b][c]=C[a][b]-0.883*B[a][b][c];
	      C[a][b]=C[a-4][b-2]-0.445*B[a][b][c];
	    }

    return 0;
}
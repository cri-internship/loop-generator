#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(50, 580, 20, "ones");
	int *C = create_one_dim_int(80, "ones");
	int *A = create_one_dim_int(220, "ones");

	for (int c = 0; c < 17; c++)
	  for (int b = 0; b < 576; b++)
	    for (int a = 4; a < 46; a++)
	    {
	      
	      C[a]=C[a-2]*14;
	      
	      A[a]=A[a+4]-37;
	      
	      B[a][b][c]=B[a+1][b+4][c+3]+A[a];
	      
	      B[a][b][c]=B[a+4][b+2][c+2]/10;
	      
	      B[a][b][c]=A[a]-B[a][b][c]*B[a][b][c];
	      A[a]=A[a-1]/C[a];
	    }

    return 0;
}
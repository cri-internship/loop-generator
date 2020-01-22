#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(750, "zeros");
	int *C = create_one_dim_int(50, "zeros");
	int ***A = create_three_dim_int(900, 370, 250, "zeros");
	int *B = create_one_dim_int(60, "zeros");

	for (int c = 2; c < 248; c++)
	  for (int b = 0; b < 366; b++)
	    for (int a = 2; a < 896; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b][c-2]*C[a];
	      
	      A[a][b][c]=A[a][b][c]*B[a]/D[a];
	      B[a]=A[a+4][b+4][c+2]+46;
	    }

    return 0;
}
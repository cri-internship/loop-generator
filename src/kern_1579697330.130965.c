#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(830, 730, "zeros");
	int *C = create_one_dim_int(560, "zeros");
	int ***A = create_three_dim_int(440, 60, 730, "zeros");
	int ***D = create_three_dim_int(550, 760, 210, "zeros");

	for (int c = 3; c < 207; c++)
	  for (int b = 2; b < 60; b++)
	    for (int a = 3; a < 440; a++)
	    {
	      
	      D[a][b][c]=D[a-1][b-2][c]*2;
	      
	      A[a][b][c]=A[a][b-2][c-3]+B[a][b];
	      
	      D[a][b][c]=D[a+3][b+2][c+3]+19;
	      
	      int var_a=B[a][b]-45;
	      int var_b=B[a-3][b-2]*29;
	      
	      D[a][b][c]=C[a]/29-A[a][b][c];
	      B[a][b]=C[a]-18;
	    }

    return 0;
}
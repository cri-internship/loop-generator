#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(840, 290, "zeros");
	int ***C = create_three_dim_int(640, 760, 90, "zeros");
	int **B = create_two_dim_int(460, 810, "zeros");
	int **A = create_two_dim_int(310, 380, "zeros");

	for (int c = 0; c < 86; c++)
	  for (int b = 2; b < 377; b++)
	    for (int a = 0; a < 307; a++)
	    {
	      
	      B[a][b]=B[a][b-2]*D[a][b]-A[a][b]/C[a][b][c];
	      
	      B[a][b]=B[a][b-1]/D[a][b]-A[a][b];
	      
	      A[a][b]=7;
	      A[a+3][b+3]=50;
	      
	      int var_a=C[a][b][c]-40;
	      int var_b=C[a+1][b][c+4]-28;
	    }

    return 0;
}
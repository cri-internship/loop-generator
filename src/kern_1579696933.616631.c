#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(580, 690, 920, "zeros");
	int **A = create_two_dim_int(510, 860, "zeros");
	int **B = create_two_dim_int(280, 260, "zeros");

	for (int c = 0; c < 920; c++)
	  for (int b = 2; b < 255; b++)
	    for (int a = 2; a < 278; a++)
	    {
	      
	      B[a][b]=B[a-2][b-2]-C[a][b][c]/A[a][b];
	      
	      A[a][b]=A[a+4][b+5]*8;
	      
	      C[a][b][c]=C[a+5][b+4][c]+34;
	      
	      B[a][b]=B[a+2][b+5]+A[a][b];
	    }

    return 0;
}
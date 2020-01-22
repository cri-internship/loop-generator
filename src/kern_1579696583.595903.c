#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(40, 710, 80, "random");
	int *B = create_one_dim_int(590, "random");
	int *A = create_one_dim_int(900, "random");

	for (int c = 0; c < 75; c++)
	  for (int b = 0; b < 706; b++)
	    for (int a = 2; a < 36; a++)
	    {
	      
	      C[a][b][c]=C[a+1][b+1][c+5]/21;
	      
	      C[a][b][c]=C[a+4][b+4][c+3]+15;
	      
	      A[a]=A[a]-C[a][b][c]+C[a][b][c];
	      C[a][b][c]=A[a-2]-C[a][b][c];
	    }

    return 0;
}
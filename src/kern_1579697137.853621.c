#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(100, 690, "zeros");
	int **D = create_two_dim_int(250, 310, "zeros");
	int *C = create_one_dim_int(230, "zeros");
	int ***B = create_three_dim_int(520, 570, 660, "zeros");

	for (int c = 0; c < 687; c++)
	  for (int b = 0; b < 97; b++)
	    for (int a = 0; a < 97; a++)
	    {
	      
	      A[a][b]=A[a+3][b+3]+36;
	      
	      C[a]=B[a][b][c];
	      C[a+4]=A[a][b]+D[a][b]/B[a][b][c];
	    }

    return 0;
}
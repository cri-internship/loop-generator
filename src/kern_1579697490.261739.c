#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(540, "zeros");
	int *D = create_one_dim_int(950, "zeros");
	int ***A = create_three_dim_int(850, 680, 320, "zeros");
	int **E = create_two_dim_int(130, 80, "zeros");
	int **B = create_two_dim_int(770, 300, "zeros");

	for (int c = 0; c < 315; c++)
	  for (int b = 4; b < 80; b++)
	    for (int a = 1; a < 130; a++)
	    {
	      
	      E[a][b]=E[a-1][b-4]*B[a][b]-C[a]/A[a][b][c]+23;
	      
	      A[a][b][c]=E[a][b];
	      A[a+2][b+4][c+5]=C[a]+E[a][b]/B[a][b];
	    }

    return 0;
}
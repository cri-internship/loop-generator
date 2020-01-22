#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(80, 410, "ones");
	int **B = create_two_dim_int(840, 80, "ones");
	int **A = create_two_dim_int(420, 850, "ones");
	int ***D = create_three_dim_int(20, 400, 570, "ones");
	int *C = create_one_dim_int(330, "ones");

	for (int c = 0; c < 565; c++)
	  for (int b = 1; b < 80; b++)
	    for (int a = 4; a < 15; a++)
	    {
	      
	      C[a]=C[a-4]-B[a][b]+E[a][b]/D[a][b][c];
	      
	      D[a][b][c]=D[a+5][b+1][c+5]*2;
	      
	      E[a][b]=42;
	      E[a][b+5]=18;
	      
	      B[a][b]=10;
	      B[a][b-1]=33;
	      
	      int var_a=A[a][b]/35;
	      int var_b=A[a+4][b+5]+11;
	    }

    return 0;
}
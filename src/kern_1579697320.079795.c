#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(50, 790, "ones");
	int *C = create_one_dim_int(520, "ones");
	int ***D = create_three_dim_int(370, 400, 910, "ones");
	int *A = create_one_dim_int(240, "ones");
	int ***B = create_three_dim_int(310, 430, 670, "ones");

	for (int c = 0; c < 905; c++)
	  for (int b = 4; b < 395; b++)
	    for (int a = 3; a < 50; a++)
	    {
	      
	      D[a][b][c]=D[a+3][b+5][c+5]-3+B[a][b][c]*A[a]/C[a];
	      
	      E[a][b]=D[a][b][c]/B[a][b][c]+A[a];
	      E[a-3][b-4]=B[a][b][c]-C[a];
	      
	      int var_a=D[a][b][c]-50;
	      int var_b=D[a+4][b+3][c+2]*12;
	    }

    return 0;
}
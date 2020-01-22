#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(550, 440, 900, "ones");
	int **B = create_two_dim_int(550, 120, "ones");
	int **D = create_two_dim_int(710, 890, "ones");
	int **E = create_two_dim_int(360, 620, "ones");
	int *C = create_one_dim_int(30, "ones");

	for (int c = 0; c < 896; c++)
	  for (int b = 0; b < 436; b++)
	    for (int a = 0; a < 30; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+4][c+4]+42;
	      
	      int var_a=A[a][b][c]-18;
	      int var_b=A[a+4][b+2][c+1]+18;
	      
	      int var_c=C[a]+33;
	      int var_d=C[a]-31;
	    }

    return 0;
}
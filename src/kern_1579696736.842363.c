#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(760, 580, "ones");
	int *A = create_one_dim_int(310, "ones");
	int *D = create_one_dim_int(280, "ones");
	int ***C = create_three_dim_int(130, 100, 890, "ones");

	for (int c = 0; c < 885; c++)
	  for (int b = 0; b < 95; b++)
	    for (int a = 3; a < 126; a++)
	    {
	      
	      A[a]=A[a-3]/41;
	      
	      D[a]=40;
	      D[a+1]=20;
	      
	      int var_a=C[a][b][c]*15;
	      int var_b=C[a+4][b+2][c+5]-25;
	      
	      int var_c=C[a][b][c]-38;
	      int var_d=C[a][b+5][c+5]+23;
	    }

    return 0;
}
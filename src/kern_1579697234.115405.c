#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(570, 900, "zeros");
	int **B = create_two_dim_int(620, 260, "zeros");
	int ***C = create_three_dim_int(310, 290, 420, "zeros");

	for (int c = 0; c < 420; c++)
	  for (int b = 3; b < 260; b++)
	    for (int a = 2; a < 308; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]/38;
	      
	      A[a][b]=38;
	      A[a+4][b+1]=12;
	      
	      int var_a=C[a][b][c]+18;
	      int var_b=C[a+2][b][c]/10;
	    }

    return 0;
}
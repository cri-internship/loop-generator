#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(20, 830, 320, "ones");
	int **B = create_two_dim_int(970, 490, "ones");
	int *D = create_one_dim_int(540, "ones");
	int ***A = create_three_dim_int(620, 500, 830, "ones");
	int ***C = create_three_dim_int(50, 570, 570, "ones");

	for (int c = 0; c < 315; c++)
	  for (int b = 0; b < 568; b++)
	    for (int a = 0; a < 19; a++)
	    {
	      
	      E[a][b][c]=E[a+1][b][c+5]+1;
	      
	      C[a][b][c]=C[a+5][b+2][c+3]+37;
	    }

    return 0;
}
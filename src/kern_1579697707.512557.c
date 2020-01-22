#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(790, 340, "ones");
	int ***E = create_three_dim_int(350, 220, 320, "ones");
	int ***B = create_three_dim_int(650, 990, 860, "ones");
	int ***D = create_three_dim_int(320, 160, 930, "ones");
	int **C = create_two_dim_int(620, 510, "ones");

	for (int c = 4; c < 320; c++)
	  for (int b = 5; b < 220; b++)
	    for (int a = 5; a < 350; a++)
	    {
	      
	      E[a][b][c]=E[a-4][b-5][c]+14;
	      
	      E[a][b][c]=E[a-3][b-3][c-4]*A[a][b]+C[a][b]/D[a][b][c];
	      
	      C[a][b]=C[a-5][b-2]*37;
	      
	      A[a][b]=A[a+4][b+5]-B[a][b][c]+E[a][b][c]/5;
	    }

    return 0;
}
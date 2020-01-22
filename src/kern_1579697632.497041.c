#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(970, 970, 720, "ones");
	int ***D = create_three_dim_int(300, 690, 400, "ones");
	int *B = create_one_dim_int(90, "ones");
	int ***C = create_three_dim_int(490, 440, 330, "ones");

	for (int c = 3; c < 395; c++)
	  for (int b = 4; b < 685; b++)
	    for (int a = 4; a < 90; a++)
	    {
	      
	      D[a][b][c]=D[a][b+4][c]/C[a][b][c];
	      
	      D[a][b][c]=D[a+2][b+5][c+5]/B[a]*A[a][b][c]-B[a];
	      
	      B[a]=40;
	      B[a-3]=12;
	      
	      int var_a=D[a][b][c]+48;
	      int var_b=D[a][b+1][c+4]+3;
	    }

    return 0;
}
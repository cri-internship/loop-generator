#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(130, 10, 850, "ones");
	int ***A = create_three_dim_int(870, 240, 490, "ones");
	int ***C = create_three_dim_int(910, 200, 840, "ones");

	for (int c = 5; c < 487; c++)
	  for (int b = 4; b < 7; b++)
	    for (int a = 4; a < 126; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b][c-5]+48;
	      
	      A[a][b][c]=A[a+3][b+5][c+3]-18;
	      
	      B[a][b][c]=B[a+4][b+3][c+2]*10;
	      
	      C[a][b][c]=C[a+5][b+1][c+5]+9/A[a][b][c];
	      
	      A[a][b][c]=B[a][b][c]+C[a][b][c];
	      B[a][b][c]=B[a-2][b-4][c-2]-C[a][b][c];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(740, 600, 630, "zeros");
	int ***A = create_three_dim_int(590, 370, 230, "zeros");

	for (int c = 3; c < 229; c++)
	  for (int b = 4; b < 366; b++)
	    for (int a = 3; a < 588; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-4][c-3]*B[a][b][c];
	      
	      B[a][b][c]=B[a+3][b+3][c+5]/27;
	      
	      A[a][b][c]=A[a+2][b+4][c+1]*16;
	      
	      B[a][b][c]=B[a][b][c]/20;
	      A[a][b][c]=B[a+5][b+2][c+1]+A[a][b][c];
	    }

    return 0;
}
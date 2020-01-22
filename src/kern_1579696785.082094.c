#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(460, 770, 960, "ones");
	int ***B = create_three_dim_int(80, 980, 120, "ones");

	for (int c = 5; c < 116; c++)
	  for (int b = 5; b < 767; b++)
	    for (int a = 0; a < 77; a++)
	    {
	      
	      A[a][b][c]=A[a+3][b+3][c+3]/30;
	      
	      B[a][b][c]=A[a][b][c];
	      B[a][b-5][c-5]=A[a][b][c];
	      
	      A[a][b][c]=43;
	      
	      B[a][b][c]=A[a][b][c];
	    }

    return 0;
}
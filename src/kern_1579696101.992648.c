#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(380, 100, 410, "zeros");
	int ***C = create_three_dim_int(510, 770, 570, "zeros");
	int ***B = create_three_dim_int(80, 300, 420, "zeros");

	for (int c = 0; c < 566; c++)
	  for (int b = 0; b < 765; b++)
	    for (int a = 0; a < 508; a++)
	    {
	      
	      C[a][b][c]=B[a][b][c];
	      C[a+2][b+5][c+4]=A[a][b][c]-B[a][b][c];
	    }

    return 0;
}
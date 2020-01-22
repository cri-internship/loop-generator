#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(290, 980, 230, "zeros");
	int *B = create_one_dim_int(500, "zeros");

	for (int c = 4; c < 229; c++)
	  for (int b = 1; b < 978; b++)
	    for (int a = 2; a < 285; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-1][c-4]/2;
	      
	      B[a]=B[a+5]+A[a][b][c];
	      
	      A[a][b][c]=A[a+5][b+2][c+1]+49;
	    }

    return 0;
}
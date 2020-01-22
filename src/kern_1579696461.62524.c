#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(750, "ones");
	int ***A = create_three_dim_int(870, 530, 560, "ones");

	for (int c = 1; c < 560; c++)
	  for (int b = 2; b < 530; b++)
	    for (int a = 5; a < 745; a++)
	    {
	      
	      A[a][b][c]=43;
	      A[a-5][b-2][c-1]=17;
	      
	      B[a]=B[a]*A[a][b][c];
	      A[a][b][c]=B[a+5]+A[a][b][c];
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(980, 870, 860, "zeros");
	int *A = create_one_dim_int(260, "zeros");

	for (int c = 2; c < 855; c++)
	  for (int b = 1; b < 870; b++)
	    for (int a = 1; a < 260; a++)
	    {
	      
	      B[a][b][c]=B[a+5][b][c+5]*A[a];
	      
	      B[a][b][c]=A[a];
	    }

    return 0;
}
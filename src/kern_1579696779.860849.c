#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(760, 560, 890, "zeros");
	int *A = create_one_dim_int(850, "zeros");

	for (int c = 0; c < 885; c++)
	  for (int b = 0; b < 556; b++)
	    for (int a = 4; a < 760; a++)
	    {
	      
	      A[a]=A[a-1]/22;
	      
	      B[a][b][c]=B[a][b+4][c+5]*35;
	      
	      A[a]=35;
	      
	      B[a][b][c]=11;
	    }

    return 0;
}
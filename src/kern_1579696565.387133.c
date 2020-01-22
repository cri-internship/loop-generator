#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(890, 190, "ones");
	int **B = create_two_dim_int(260, 920, "ones");

	for (int c = 5; c < 190; c++)
	  for (int b = 2; b < 255; b++)
	    for (int a = 2; a < 255; a++)
	    {
	      
	      B[a][b]=B[a][b-5]-44;
	      
	      B[a][b]=B[a+5][b+1]*A[a][b];
	      
	      B[a][b]=B[a][b+3]/30;
	      
	      A[a][b]=7;
	      A[a-2][b]=15;
	    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(850, "random");
	int **B = create_two_dim_int(520, 550, "random");

	for (int b = 0; b < 546; b++)
	  for (int a = 0; a < 519; a++)
	  {
	    
	     B[a][b]=B[a+1][b+4]-29;
	    
	     A[a]=B[a][b];
	     A[a+4]=B[a][b];
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(520, 120, "zeros");
	int *A = create_one_dim_int(390, "zeros");

	for (int b = 2; b < 115; b++)
	  for (int a = 5; a < 385; a++)
	  {
	    
	     B[a][b]=B[a-5][b-2]+A[a];
	    
	     B[a][b]=B[a+5][b+5]-A[a];
	    
	     A[a]=B[a][b];
	     A[a+5]=B[a][b];
	    
	     A[a]=B[a][b];
	  }

    return 0;
}
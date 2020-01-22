#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(310, "zeros");
	int **A = create_two_dim_int(830, 310, "zeros");
	int *C = create_one_dim_int(390, "zeros");

	for (int b = 5; b < 305; b++)
	  for (int a = 5; a < 305; a++)
	  {
	    
	     B[a]=B[a-4]-49;
	    
	     B[a]=B[a-5]-A[a][b];
	    
	     B[a]=B[a+5]*19;
	    
	     C[a]=C[a+5]/20;
	  }

    return 0;
}
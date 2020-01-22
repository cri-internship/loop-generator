#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(980, 410, "ones");
	int *B = create_one_dim_int(600, "ones");
	int **D = create_two_dim_int(440, 20, "ones");
	int *A = create_one_dim_int(430, "ones");

	for (int b = 5; b < 409; b++)
	  for (int a = 5; a < 430; a++)
	  {
	    
	     A[a]=A[a-4]+19;
	    
	     C[a][b]=C[a+4][b+1]*30;
	    
	     B[a]=D[a][b];
	     B[a-5]=C[a][b];
	    
	     C[a][b]=23;
	  }

    return 0;
}
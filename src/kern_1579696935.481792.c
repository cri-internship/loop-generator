#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(750, 550, "zeros");
	int *A = create_one_dim_int(450, "zeros");
	int *B = create_one_dim_int(480, "zeros");

	for (int b = 4; b < 449; b++)
	  for (int a = 4; a < 449; a++)
	  {
	    
	     B[a]=C[a][b];
	     B[a]=B[a]+A[a];
	    
	     A[a]=A[a+1]/B[a];
	    
	     B[a]=B[a+4]-21;
	    
	     int var_a=B[a]-47;
	     B[a]=3;
	  }

    return 0;
}
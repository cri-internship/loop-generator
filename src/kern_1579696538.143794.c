#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(120, "zeros");
	int **B = create_two_dim_int(620, 740, "zeros");

	for (int b = 3; b < 738; b++)
	  for (int a = 5; a < 120; a++)
	  {
	    
	     B[a][b]=B[a-3][b-3]+A[a];
	    
	     A[a]=B[a][b];
	     A[a-5]=B[a][b];
	    
	     A[a]=11;
	    
	     B[a][b]=A[a];
	    
	     int var_a=A[a]+30;
	     int var_b=A[a-5]*14;
	  }

    return 0;
}
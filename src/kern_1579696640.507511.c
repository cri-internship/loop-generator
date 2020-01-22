#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(680, 950, "random");
	int *A = create_one_dim_int(630, "random");
	int **B = create_two_dim_int(460, 140, "random");

	for (int b = 4; b < 140; b++)
	  for (int a = 5; a < 460; a++)
	  {
	    
	     B[a][b]=B[a][b-1]+A[a];
	    
	     C[a][b]=C[a-5][b-4]/5;
	    
	     A[a]=A[a+3]/1;
	    
	     C[a][b]=C[a+5][b+3]/5;
	    
	     int var_a=A[a]*33;
	     int var_b=A[a-1]+36;
	  }

    return 0;
}
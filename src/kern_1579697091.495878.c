#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(430, "ones");
	int *A = create_one_dim_int(820, "ones");
	int ***B = create_three_dim_int(430, 370, 60, "ones");

	for (int b = 0; b < 366; b++)
	  for (int a = 4; a < 425; a++)
	  {
	    
	     B[a][b][a]=A[a]*B[a][b][a]-C[a];
	     A[a]=C[a]-B[a][b][a];
	    
	     B[a][b][a]=B[a+2][b+1][a+5]*29;
	    
	     A[a]=A[a+5]+C[a];
	    
	     C[a]=10;
	     C[a+4]=26;
	    
	     C[a]=42;
	    
	     int var_a=B[a][b][a]*28;
	     int var_b=B[a][b+4][a+1]-26;
	    
	     int var_c=A[a]/26;
	  }

    return 0;
}
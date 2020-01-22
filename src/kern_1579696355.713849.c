#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(160, 920, 270, "zeros");
	int *B = create_one_dim_int(360, "zeros");

	for (int b = 5; b < 916; b++)
	  for (int a = 4; a < 155; a++)
	  {
	    
	     A[a][b][a]=A[a][b-5][a]*15;
	    
	     B[a]=B[a+3]-A[a][b][a];
	    
	     A[a][b][a]=A[a+3][b+4][a+5]/22;
	    
	     int var_a=A[a][b][a]/22;
	     int var_b=A[a-2][b-5][a-4]-28;
	  }

    return 0;
}
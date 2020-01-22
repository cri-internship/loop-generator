#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(660, "zeros");
	int ***A = create_three_dim_int(910, 460, 940, "zeros");

	for (int b = 3; b < 460; b++)
	  for (int a = 5; a < 656; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-3][a-1]+37;
	    
	     B[a]=3;
	     B[a-1]=49;
	    
	     B[a]=A[a][b][a];
	    
	     int var_a=A[a][b][a]*42;
	     int var_b=A[a][b-3][a-5]/38;
	    
	     A[a][b][a]=B[a]/A[a][b][a];
	     B[a]=B[a-3]+A[a][b][a];
	  }

    return 0;
}
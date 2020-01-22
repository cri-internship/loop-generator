#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(660, 290, 10, "zeros");
	int *A = create_one_dim_int(160, "zeros");

	for (int a = 5; a < 160; a++)
	{
	  
	    A[a]=49;
	    float  var_a=A[a]+7;
	  
	    B[a][a][a]=B[a-4][a-1][a-3]-A[a];
	  
	    B[a][a][a]=B[a+4][a+4][a+1]-A[a];
	  
	    A[a]=A[a]/23;
	    B[a][a][a]=A[a-5]/10;
	  
	    B[a][a][a]=B[a][a][a]+31;
	    A[a]=B[a][a+5][a+1]+40;
	}

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(620, 580, 440, "ones");
	int *A = create_one_dim_int(690, "ones");
	int ***B = create_three_dim_int(960, 710, 570, "ones");

	for (int a = 0; a < 615; a++)
	{
	  
	    B[a][a][a]=47;
	    B[a+2][a+5][a+5]=9;
	  
	    A[a]=44;
	    A[a+3]=5;
	  
	    C[a][a][a]=12;
	    C[a+2][a][a+1]=45;
	  
	    int var_a=C[a][a][a]-12;
	    int var_b=C[a+5][a+2][a+5]*0;
	}

    return 0;
}
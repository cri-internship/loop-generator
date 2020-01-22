#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(880, "ones");
	int ***B = create_three_dim_int(160, 340, 390, "ones");

	for (int a = 4; a < 155; a++)
	{
	  
	    B[a][a][a]=B[a][a-4][a-1]/A[a];
	  
	    int var_a=A[a]-17;
	    A[a]=21;
	  
	    B[a][a][a]=23;
	  
	    int var_b=A[a]*11;
	    int var_c=A[a+2]*17;
	  
	    int var_d=B[a][a][a]+0;
	    int var_e=B[a+2][a+4][a+2]+36;
	}

    return 0;
}
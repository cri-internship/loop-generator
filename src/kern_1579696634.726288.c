#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(760, 100, 350, "random");
	int ***B = create_three_dim_int(750, 910, 660, "random");
	int ***A = create_three_dim_int(580, 280, 130, "random");

	for (int a = 5; a < 576; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-5][a]-C[a][a][a]/43;
	  
	    C[a][a][a]=25;
	    C[a+3][a+5][a+1]=49;
	  
	    int var_a=A[a][a][a]*47;
	    int var_b=A[a+2][a+4][a+2]/10;
	}

    return 0;
}
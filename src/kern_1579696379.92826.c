#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(520, 990, "zeros");
	int ***A = create_three_dim_int(60, 960, 380, "zeros");

	for (int a = 0; a < 55; a++)
	{
	  
	    int var_a=A[a][a][a]/46;
	    int var_b=A[a+2][a][a+5]+16;
	  
	    int var_c=B[a][a]*26;
	    int var_d=B[a+3][a+3]-2;
	}

    return 0;
}
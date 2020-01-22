#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(40, 910, 700, "ones");
	int **D = create_two_dim_int(870, 790, "ones");
	int ***E = create_three_dim_int(80, 410, 480, "ones");
	int **C = create_two_dim_int(330, 430, "ones");
	int **A = create_two_dim_int(680, 710, "ones");

	for (int a = 4; a < 40; a++)
	{
	  
	    A[a][a]=A[a+5][a+5]*42;
	  
	    int var_a=B[a][a][a]/25;
	    int var_b=B[a][a-4][a-3]/39;
	  
	    int var_c=C[a][a]+28;
	    int var_d=C[a+4][a+5]-50;
	  
	    int var_e=C[a][a]-46;
	    int var_f=C[a][a-4]/49;
	}

    return 0;
}
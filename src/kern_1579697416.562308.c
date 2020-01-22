#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(540, 750, "ones");
	int ***D = create_three_dim_int(70, 140, 50, "ones");
	int *B = create_one_dim_int(490, "ones");
	int ***A = create_three_dim_int(540, 20, 270, "ones");
	int **C = create_two_dim_int(160, 160, "ones");

	for (int a = 3; a < 65; a++)
	{
	  
	    B[a]=B[a-3]+27;
	  
	    D[a][a][a]=D[a+5][a+2][a+3]-44;
	  
	    E[a][a]=E[a+5][a]-14;
	  
	    D[a][a][a]=D[a+5][a][a]-45*A[a][a][a]+E[a][a]/C[a][a];
	  
	    int var_a=D[a][a][a]*41;
	    int var_b=D[a][a+2][a]/6;
	  
	    int var_c=D[a][a][a]/29;
	}

    return 0;
}
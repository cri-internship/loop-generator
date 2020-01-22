#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(690, 820, 210, "zeros");
	int ***A = create_three_dim_int(240, 990, 60, "zeros");
	int ***D = create_three_dim_int(690, 650, 480, "zeros");
	int ***C = create_three_dim_int(260, 780, 770, "zeros");
	int *E = create_one_dim_int(310, "zeros");

	for (int a = 5; a < 256; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-5][a-4]-A[a][a][a]/E[a]*C[a][a][a];
	  
	    B[a][a][a]=B[a][a-1][a]+36;
	  
	    D[a][a][a]=D[a-1][a-1][a-3]-16;
	  
	    C[a][a][a]=C[a+2][a+2][a+4]/39;
	  
	    C[a][a][a]=41;
	  
	    A[a][a][a]=B[a][a][a]/D[a][a][a]-D[a][a][a]*A[a][a][a];
	    C[a][a][a]=B[a+4][a+3][a+1]+A[a][a][a]/C[a][a][a]*E[a];
	  
	    int var_a=E[a]/24;
	    int var_b=E[a-5]*19;
	}

    return 0;
}
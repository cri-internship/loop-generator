#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(290, 470, "zeros");
	int **E = create_two_dim_int(420, 250, "zeros");
	int ***D = create_three_dim_int(960, 630, 930, "zeros");
	int **B = create_two_dim_int(830, 550, "zeros");
	int ***A = create_three_dim_int(750, 80, 310, "zeros");

	for (int a = 4; a < 290; a++)
	{
	  
	    E[a][a]=E[a-4][a]/A[a][a][a]+33*D[a][a][a]-B[a][a];
	  
	    E[a][a]=E[a+2][a+5]/C[a][a]-D[a][a][a]+B[a][a]*39;
	  
	    D[a][a][a]=D[a+5][a][a+1]-E[a][a]+C[a][a];
	  
	    C[a][a]=30;
	    C[a-3][a-4]=37;
	  
	    B[a][a]=E[a][a]/A[a][a][a]-B[a][a]*C[a][a]+D[a][a][a];
	    C[a][a]=E[a-1][a-2]-C[a][a]+A[a][a][a]/D[a][a][a]*B[a][a];
	  
	    A[a][a][a]=D[a][a][a]/B[a][a]+A[a][a][a]-C[a][a];
	    E[a][a]=D[a+3][a+1][a]*49;
	}

    return 0;
}
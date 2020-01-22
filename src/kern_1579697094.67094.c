#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(360, 210, "random");
	int *C = create_one_dim_int(90, "random");
	int ***D = create_three_dim_int(150, 460, 630, "random");
	int ***A = create_three_dim_int(490, 90, 450, "random");
	int ***B = create_three_dim_int(340, 550, 500, "random");

	for (int a = 0; a < 90; a++)
	{
	  
	    C[a]=D[a][a][a]-B[a][a][a];
	    A[a][a][a]=C[a]/E[a][a]+A[a][a][a]-20*E[a][a];
	  
	    C[a]=C[a]/D[a][a][a]*E[a][a]+A[a][a][a]-B[a][a][a];
	    C[a]=43;
	  
	    D[a][a][a]=D[a+1][a+3][a+5]+C[a]/E[a][a]-B[a][a][a]*C[a];
	  
	    E[a][a]=E[a+1][a+3]*18;
	}

    return 0;
}
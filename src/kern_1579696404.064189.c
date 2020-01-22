#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(570, 470, "random");
	int **E = create_two_dim_int(230, 270, "random");
	int ***D = create_three_dim_int(600, 200, 160, "random");
	int *C = create_one_dim_int(220, "random");
	int ***A = create_three_dim_int(80, 90, 220, "random");

	for (int a = 5; a < 80; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-2][a-4]-B[a][a];
	  
	    C[a]=C[a-2]/45;
	  
	    B[a][a]=B[a-5][a-3]/C[a];
	  
	    A[a][a][a]=B[a][a]+E[a][a];
	    E[a][a]=B[a-5][a-4]*D[a][a][a]+7;
	  
	    int var_a=C[a]-4;
	    int var_b=C[a]*36;
	  
	    int var_c=E[a][a]-2;
	    int var_d=E[a-2][a-3]+37;
	}

    return 0;
}
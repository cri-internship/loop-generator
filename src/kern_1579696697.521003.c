#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(750, "random");
	int *B = create_one_dim_int(990, "random");
	int ***C = create_three_dim_int(210, 630, 860, "random");
	int **E = create_two_dim_int(110, 240, "random");
	int ***D = create_three_dim_int(180, 110, 530, "random");

	for (int a = 5; a < 105; a++)
	{
	  
	    E[a][a]=E[a-5][a-1]*10/C[a][a][a]-D[a][a][a]+A[a];
	  
	    E[a][a]=E[a-4][a]-13;
	  
	    E[a][a]=E[a+2][a+5]/33;
	  
	    int var_a=A[a]-15;
	    int var_b=A[a+4]*30;
	  
	    int var_c=B[a]+7;
	    int var_d=B[a+5]+30;
	  
	    C[a][a][a]=E[a][a]+D[a][a][a];
	    D[a][a][a]=E[a+5][a+3]/B[a]-C[a][a][a]+D[a][a][a]*A[a];
	}

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(290, 50, 510, "random");
	int *B = create_one_dim_int(350, "random");
	int **C = create_two_dim_int(450, 680, "random");
	int **A = create_two_dim_int(860, 540, "random");

	for (int a = 5; a < 347; a++)
	{
	  
	    B[a]=B[a-5]/47;
	  
	    int var_a=B[a]*8;
	    int var_b=B[a+3]-25;
	  
	    C[a][a]=B[a]*A[a][a]/D[a][a][a];
	    D[a][a][a]=B[a-4]*C[a][a]+D[a][a][a];
	  
	    int var_c=A[a][a]-9;
	    int var_d=A[a+4][a+5]*49;
	}

    return 0;
}
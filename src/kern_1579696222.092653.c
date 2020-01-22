#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(850, "random");
	int ***C = create_three_dim_int(100, 750, 850, "random");
	int **A = create_two_dim_int(530, 610, "random");

	for (int a = 5; a < 100; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-2][a-3]*B[a]/A[a][a];
	  
	    B[a]=B[a+4]*7;
	  
	    A[a][a]=8;
	    A[a][a]=5;
	  
	    int var_a=A[a][a]*12;
	    int var_b=A[a-4][a-5]-8;
	  
	    int var_c=A[a][a]/40;
	    int var_d=A[a+5][a+5]*29;
	}

    return 0;
}
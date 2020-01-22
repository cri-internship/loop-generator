#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(900, 240, "ones");
	int *A = create_one_dim_int(710, "ones");
	int ***B = create_three_dim_int(810, 100, 10, "ones");
	int *E = create_one_dim_int(960, "ones");
	int *C = create_one_dim_int(670, "ones");

	for (int a = 5; a < 705; a++)
	{
	  
	    D[a][a]=D[a-1][a-3]-10;
	  
	    A[a]=A[a-5]+D[a][a]-42;
	  
	    D[a][a]=D[a-5][a-1]/E[a]*A[a]+B[a][a][a];
	  
	    A[a]=A[a+5]-40;
	  
	    int var_a=E[a]/4;
	    int var_b=E[a+4]+44;
	  
	    int var_c=A[a]+39;
	    int var_d=A[a+4]+9;
	}

    return 0;
}
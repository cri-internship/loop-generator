#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(430, 690, "zeros");
	int *A = create_one_dim_int(370, "zeros");
	int *D = create_one_dim_int(520, "zeros");
	int **C = create_two_dim_int(380, 830, "zeros");
	int ***B = create_three_dim_int(790, 950, 790, "zeros");

	for (int a = 0; a < 375; a++)
	{
	  
	    C[a][a]=C[a][a+5]*A[a];
	  
	    B[a][a][a]=2;
	    B[a+3][a][a+2]=25;
	  
	    int var_a=C[a][a]/43;
	    int var_b=C[a+4][a]-7;
	}

    return 0;
}
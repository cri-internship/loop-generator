#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(410, "ones");
	int **C = create_two_dim_int(710, 770, "ones");
	int **E = create_two_dim_int(60, 800, "ones");
	int **D = create_two_dim_int(640, 800, "ones");
	int *A = create_one_dim_int(930, "ones");

	for (int a = 5; a < 408; a++)
	{
	  
	    D[a][a]=D[a-5][a-3]-E[a][a]*A[a];
	  
	    A[a]=A[a+3]*46;
	  
	    D[a][a]=C[a][a]*B[a]/E[a][a];
	  
	    C[a][a]=35;
	    C[a+5][a+2]=44;
	  
	    int var_a=C[a][a]-42;
	    int var_b=C[a][a+3]*42;
	  
	    int var_c=B[a]*40;
	    int var_d=B[a+2]/9;
	}

    return 0;
}
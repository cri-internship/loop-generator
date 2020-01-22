#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(60, 260, 340, "zeros");
	int ***B = create_three_dim_int(190, 730, 450, "zeros");
	int ***C = create_three_dim_int(640, 610, 580, "zeros");

	for (int a = 5; a < 55; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-4][a-3]/B[a][a][a];
	  
	    B[a][a][a]=B[a][a+1][a+2]*C[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+1][a+5]-B[a][a][a];
	  
	    int var_a=C[a][a][a]-22;
	    int var_b=C[a-5][a-3][a-2]-31;
	  
	    int var_c=B[a][a][a]/29;
	    int var_d=B[a-2][a-3][a-1]+7;
	}

    return 0;
}
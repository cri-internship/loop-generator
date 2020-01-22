#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(150, 840, 900, "random");
	int ***D = create_three_dim_int(990, 240, 40, "random");
	int **C = create_two_dim_int(170, 800, "random");
	int ***A = create_three_dim_int(370, 110, 860, "random");

	for (int a = 5; a < 148; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-5][a-3]/8;
	  
	    A[a][a][a]=A[a+4][a+5][a+5]+22;
	  
	    A[a][a][a]=A[a+3][a][a+4]-43;
	  
	    A[a][a][a]=A[a+1][a+2][a+1]*29;
	  
	    B[a][a][a]=B[a+1][a+2][a+1]+10-A[a][a][a];
	  
	    C[a][a]=C[a+4][a+3]+26;
	  
	    int var_a=D[a][a][a]/18;
	    int var_b=D[a-1][a-2][a]+44;
	}

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(520, 70, 650, "zeros");
	int **C = create_two_dim_int(840, 50, "zeros");
	int *A = create_one_dim_int(300, "zeros");
	int **D = create_two_dim_int(90, 290, "zeros");

	for (int a = 4; a < 300; a++)
	{
	  
	    A[a]=A[a-1]*19;
	  
	    B[a][a][a]=47;
	    B[a-2][a-2][a-4]=13;
	  
	    int var_a=B[a][a][a]-21;
	    int var_b=B[a+1][a][a+3]/14;
	}

    return 0;
}
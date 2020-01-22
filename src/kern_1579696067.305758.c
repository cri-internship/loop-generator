#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(10, "random");
	int **C = create_two_dim_int(70, 40, "random");
	int ***A = create_three_dim_int(760, 670, 240, "random");
	int *B = create_one_dim_int(690, "random");

	for (int a = 4; a < 10; a++)
	{
	  
	    int var_a=D[a]-14;
	    D[a]=37;
	  
	    C[a][a]=12;
	    C[a-4][a]=9;
	  
	    int var_b=B[a]/5;
	    int var_c=B[a+5]*16;
	}

    return 0;
}
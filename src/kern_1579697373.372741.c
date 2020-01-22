#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(600, "random");
	int *D = create_one_dim_int(840, "random");
	int *E = create_one_dim_int(270, "random");
	int **B = create_two_dim_int(300, 650, "random");
	int ***A = create_three_dim_int(350, 80, 210, "random");

	for (int a = 0; a < 598; a++)
	{
	  
	    C[a]=12;
	    C[a+2]=28;
	}

    return 0;
}
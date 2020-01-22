#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(830, "random");
	int ***A = create_three_dim_int(950, 960, 130, "random");
	int *E = create_one_dim_int(650, "random");
	int ***B = create_three_dim_int(520, 350, 510, "random");
	int *D = create_one_dim_int(160, "random");

	for (int a = 3; a < 650; a++)
	{
	  
	    E[a]=E[a-3]+D[a]-C[a]*39/B[a][a][a];
	  
	    E[a]=37;
	  
	    C[a]=C[a+4]+13;
	}

    return 0;
}
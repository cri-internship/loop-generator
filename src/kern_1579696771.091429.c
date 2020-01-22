#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(100, "ones");
	int *D = create_one_dim_int(690, "ones");
	int *A = create_one_dim_int(620, "ones");
	int ***B = create_three_dim_int(630, 760, 290, "ones");

	for (int a = 4; a < 95; a++)
	{
	  
	    A[a]=A[a-2]/B[a][a][a]+D[a]*C[a];
	  
	    C[a]=C[a+5]*A[a]-B[a][a][a]+A[a];
	  
	    C[a]=13+A[a];
	  
	    D[a]=37;
	    D[a+5]=15;
	  
	    A[a]=D[a]-B[a][a][a];
	}

    return 0;
}
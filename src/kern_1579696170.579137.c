#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(570, "zeros");
	int *C = create_one_dim_int(350, "zeros");
	int ***A = create_three_dim_int(460, 450, 940, "zeros");
	int ***B = create_three_dim_int(620, 120, 720, "zeros");

	for (int a = 5; a < 350; a++)
	{
	  
	    C[a]=C[a-5]+41;
	  
	    B[a][a][a]=B[a][a-1][a-5]-47/D[a];
	  
	    B[a][a][a]=A[a][a][a]-D[a]/A[a][a][a];
	  
	    D[a]=11;
	    D[a-2]=49;
	}

    return 0;
}
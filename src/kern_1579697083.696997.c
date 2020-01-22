#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(410, "ones");
	double *A = create_one_dim_double(860, "ones");
	double *D = create_one_dim_double(570, "ones");
	double **B = create_two_dim_double(420, 530, "ones");
	double **E = create_two_dim_double(970, 330, "ones");

	for (int c = 5; c < 326; c++)
	  for (int b = 5; b < 967; b++)
	    for (int a = 5; a < 967; a++)
	    {
	      
	      E[a][b]=0.173;
	      E[a-5][b-5]=0.789;
	      
	      E[a][b]=0.198*B[a][b]/D[a];
	    }

    return 0;
}
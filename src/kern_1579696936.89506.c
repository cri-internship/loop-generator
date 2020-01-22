#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(570, "zeros");
	double **B = create_two_dim_double(190, 850, "zeros");
	double *D = create_one_dim_double(370, "zeros");
	double **C = create_two_dim_double(930, 490, "zeros");
	double **A = create_two_dim_double(400, 830, "zeros");

	for (int a = 2; a < 370; a++)
	{
	  
	    D[a]=D[a-2]/0.46;
	  
	    A[a][a]=A[a+1][a+1]+0.635;
	  
	    E[a]=0.457;
	    E[a-2]=0.576;
	}

    return 0;
}
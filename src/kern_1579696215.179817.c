#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(610, 630, 490, "zeros");
	double **C = create_two_dim_double(550, 760, "zeros");
	double *B = create_one_dim_double(210, "zeros");

	for (int b = 5; b < 630; b++)
	  for (int a = 3; a < 210; a++)
	  {
	    
	     A[a][b][a]=A[a][b-1][a-2]-C[a][b];
	    
	     C[a][b]=C[a+2][b]+0.491;
	    
	     C[a][b]=0.534;
	    
	     B[a]=0.184;
	     B[a-1]=0.507;
	    
	     A[a][b][a]=C[a][b]-B[a];
	     C[a][b]=C[a-3][b-5]/A[a][b][a]*B[a];
	  }

    return 0;
}
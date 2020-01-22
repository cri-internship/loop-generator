#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(220, 520, "ones");
	double **E = create_two_dim_double(170, 210, "ones");
	double ***B = create_three_dim_double(250, 690, 550, "ones");
	double ***A = create_three_dim_double(980, 50, 400, "ones");
	double ***C = create_three_dim_double(640, 410, 610, "ones");

	for (int b = 4; b < 50; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b][a-5]+D[a][b]-C[a][b][a]/E[a][b];
	    
	     E[a][b]=0.667;
	     E[a-4][b-4]=0.196;
	    
	     D[a][b]=A[a][b][a]*B[a][b][a]/E[a][b]-D[a][b]+C[a][b][a];
	     E[a][b]=A[a-5][b-2][a-1]-E[a][b];
	  }

    return 0;
}
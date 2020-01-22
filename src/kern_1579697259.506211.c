#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(910, "ones");
	int *B = create_one_dim_int(420, "ones");
	int *A = create_one_dim_int(610, "ones");
	int *D = create_one_dim_int(320, "ones");
	int ***C = create_three_dim_int(940, 700, 210, "ones");

	for (int c = 0; c < 206; c++)
	  for (int b = 0; b < 696; b++)
	    for (int a = 4; a < 320; a++)
	    {
	      
	      D[a]=D[a-4]-6;
	      
	      E[a]=E[a-1]/18;
	      
	      C[a][b][c]=C[a+4][b+4][c+4]*E[a]+B[a]-D[a];
	      
	      B[a]=37;
	      B[a+1]=E[a]*D[a]-C[a][b][c];
	    }

    return 0;
}
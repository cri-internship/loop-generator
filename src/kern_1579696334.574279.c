#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(30, "ones");
	int *A = create_one_dim_int(620, "ones");
	int *B = create_one_dim_int(50, "ones");
	int ***C = create_three_dim_int(830, 130, 840, "ones");
	int *E = create_one_dim_int(310, "ones");

	for (int c = 4; c < 30; c++)
	  for (int b = 4; b < 30; b++)
	    for (int a = 4; a < 30; a++)
	    {
	      
	      B[a]=D[a]+E[a];
	      A[a]=B[a]-A[a]+C[a][b][c]*A[a];
	      
	      E[a]=E[a-1]+B[a];
	      
	      B[a]=B[a+5]*C[a][b][c]+D[a]/A[a];
	      
	      A[a]=E[a];
	      
	      D[a]=34;
	      D[a-1]=46;
	      
	      int var_a=B[a]+15;
	      int var_b=B[a+1]/48;
	      
	      B[a]=A[a]/B[a]-D[a]*E[a]+C[a][b][c];
	      E[a]=A[a-1]/C[a][b][c]+D[a]*E[a]-43;
	    }

    return 0;
}
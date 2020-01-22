#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(850, 750, "ones");
	int **C = create_two_dim_int(680, 440, "ones");
	int ***B = create_three_dim_int(900, 860, 990, "ones");
	int **A = create_two_dim_int(380, 430, "ones");
	int ***E = create_three_dim_int(610, 490, 280, "ones");

	for (int b = 5; b < 426; b++)
	  for (int a = 0; a < 378; a++)
	  {
	    
	     D[a][b]=D[a][b-4]*E[a][b][a]-A[a][b];
	    
	     C[a][b]=C[a][b-5]-D[a][b]*B[a][b][a]/E[a][b][a];
	    
	     D[a][b]=D[a][b+1]*23;
	    
	     A[a][b]=A[a+2][b+4]/30;
	    
	     A[a][b]=A[a+1][b+1]-E[a][b][a]*B[a][b][a]+C[a][b];
	    
	     D[a][b]=D[a+1][b+5]*E[a][b][a]-C[a][b]+B[a][b][a];
	  }

    return 0;
}
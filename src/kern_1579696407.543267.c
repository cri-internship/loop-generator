#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(420, 370, 20, "zeros");
	int **D = create_two_dim_int(210, 940, "zeros");
	int *E = create_one_dim_int(940, "zeros");
	int **B = create_two_dim_int(210, 810, "zeros");
	int ***A = create_three_dim_int(850, 970, 460, "zeros");

	for (int b = 4; b < 805; b++)
	  for (int a = 2; a < 205; a++)
	  {
	    
	     E[a]=E[a+1]-19;
	    
	     D[a][b]=D[a][b+1]-39;
	    
	     A[a][b][a]=A[a+5][b][a+2]/C[a][b][a]+B[a][b]-D[a][b];
	    
	     A[a][b][a]=E[a]/B[a][b]+46*D[a][b];
	    
	     B[a][b]=7;
	     B[a][b+5]=38;
	    
	     B[a][b]=D[a][b]-A[a][b][a]/A[a][b][a]*B[a][b]+E[a];
	     A[a][b][a]=D[a+5][b+4]*E[a]/B[a][b]-C[a][b][a];
	  }

    return 0;
}
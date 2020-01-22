#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(180, "ones");
	int ***C = create_three_dim_int(420, 10, 140, "ones");
	int ***A = create_three_dim_int(740, 370, 160, "ones");
	int **D = create_two_dim_int(240, 490, "ones");
	int ***B = create_three_dim_int(930, 810, 840, "ones");

	for (int b = 3; b < 7; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     B[a][b][a]=B[a][b+4][a+1]-C[a][b][a]/39;
	    
	     C[a][b][a]=C[a+1][b+3][a]*14;
	    
	     A[a][b][a]=B[a][b][a]/D[a][b]*E[a]-B[a][b][a];
	     A[a+4][b+3][a+1]=E[a]+C[a][b][a]-B[a][b][a];
	    
	     C[a][b][a]=A[a][b][a];
	    
	     E[a]=3;
	     E[a-5]=C[a][b][a];
	    
	     A[a][b][a]=E[a]*11;
	  }

    return 0;
}
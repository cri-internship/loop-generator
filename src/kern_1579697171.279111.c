#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(760, 200, 850, "ones");
	int **C = create_two_dim_int(940, 70, "ones");
	int **E = create_two_dim_int(20, 120, "ones");
	int *D = create_one_dim_int(510, "ones");
	int **A = create_two_dim_int(930, 670, "ones");

	for (int b = 5; b < 70; b++)
	  for (int a = 5; a < 15; a++)
	  {
	    
	     C[a][b]=C[a+2][b]-19;
	    
	     B[a][b][a]=B[a+5][b+2][a]*29;
	    
	     B[a][b][a]=29;
	    
	     E[a][b]=44;
	     E[a+5][b+2]=28;
	    
	     B[a][b][a]=D[a]/C[a][b]+8;
	     C[a][b]=D[a+3]-A[a][b]+B[a][b][a];
	    
	     E[a][b]=E[a][b]/D[a];
	     A[a][b]=E[a-2][b-5]/30;
	    
	     int var_a=E[a][b]/47;
	     int var_b=E[a+3][b]/40;
	  }

    return 0;
}
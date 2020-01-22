#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(210, "zeros");
	int *D = create_one_dim_int(410, "zeros");
	int ***B = create_three_dim_int(930, 90, 560, "zeros");
	int ***A = create_three_dim_int(830, 130, 230, "zeros");
	int ***C = create_three_dim_int(120, 370, 970, "zeros");

	for (int b = 5; b < 90; b++)
	  for (int a = 3; a < 115; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-1][a-1]*4;
	    
	     B[a][b][a]=B[a-3][b-5][a]*17;
	    
	     C[a][b][a]=C[a-1][b][a-2]/37;
	    
	     D[a]=D[a+1]*A[a][b][a]/C[a][b][a]+42-E[a];
	    
	     C[a][b][a]=C[a+3][b+5][a+5]-D[a]*D[a];
	    
	     A[a][b][a]=B[a][b][a]+C[a][b][a]*D[a]/E[a];
	     A[a][b+3][a+3]=E[a]-18*D[a];
	    
	     int var_a=D[a]/1;
	     int var_b=D[a+5]+27;
	  }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(250, "ones");
	int ***D = create_three_dim_int(960, 260, 360, "ones");
	int **E = create_two_dim_int(630, 660, "ones");
	int *A = create_one_dim_int(770, "ones");
	int ***B = create_three_dim_int(420, 850, 60, "ones");

	for (int b = 4; b < 655; b++)
	  for (int a = 5; a < 250; a++)
	  {
	    
	     E[a][b]=E[a][b+5]+32;
	    
	     E[a][b]=E[a+5][b+3]*C[a]/D[a][b][a]+B[a][b][a]-A[a];
	    
	     A[a]=19;
	     A[a-4]=37;
	    
	     C[a]=24*D[a][b][a]+A[a];
	     C[a-3]=A[a]+E[a][b]-D[a][b][a];
	    
	     B[a][b][a]=E[a][b]/43+B[a][b][a]-D[a][b][a];
	    
	     int var_a=E[a][b]/1;
	     int var_b=E[a+5][b+2]/41;
	    
	     int var_c=B[a][b][a]/39;
	     int var_d=B[a-1][b-4][a-5]/24;
	  }

    return 0;
}
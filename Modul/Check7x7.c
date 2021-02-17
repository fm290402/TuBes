/*Program : Check7x7.c
* Deskripsi : Pemeriksaan apakah sudah memenuhi persyaratan untuk menang, kalah, atau seri pada papan permainan 7x7.
* Nama : Fadhil Muhammad
* tanggal/ versi : 06 - Februari - 2021 / 1 
*/

char check_7X7()
{
	int i,j;

	// Pengecekan baris

	for(i=0;i<7;i++)
		if(matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2]&&matrix[i][0]==matrix[i][3]&&matrix[i][0]==matrix[i][4])
			return matrix[i][0];

	for(i=0;i<7;i++)
		if(matrix[i][1]==matrix[i][2]&&matrix[i][1]==matrix[i][3]&&matrix[i][1]==matrix[i][4]&&matrix[i][1]==matrix[i][5])
			return matrix[i][1];

	for(i=0;i<7;i++)
		if(matrix[i][2]==matrix[i][3]&&matrix[i][2]==matrix[i][4]&&matrix[i][2]==matrix[i][5]&&matrix[i][2]==matrix[i][6])
			return matrix[i][2];

	// Pengecekan kolom

	for(i=0;i<7;i++)
		if(matrix[0][i]==matrix[1][i]&&matrix[0][i]==matrix[2][i]&&matrix[0][i]==matrix[3][i]&&matrix[0][i]==matrix[4][i])							//checking if the elements of columns are identical
			return matrix[0][i];
	
	for(i=0;i<7;i++)
		if(matrix[1][i]==matrix[2][i]&&matrix[1][i]==matrix[3][i]&&matrix[1][i]==matrix[4][i]&&matrix[1][i]==matrix[5][i])							//checking if the elements of columns are identical
			return matrix[1][i];

	for(i=0;i<7;i++)
		if(matrix[2][i]==matrix[3][i]&&matrix[2][i]==matrix[4][i]&&matrix[2][i]==matrix[5][i]&&matrix[2][i]==matrix[6][i])							//checking if the elements of columns are identical
			return matrix[2][i];

	// Pengecekan Diagonal

	if(matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2]&&matrix[0][0]==matrix[3][3]&&matrix[0][0]==matrix[4][4])						
		return matrix[0][0];

	if(matrix[0][1]==matrix[1][2]&&matrix[0][1]==matrix[2][3]&&matrix[0][1]==matrix[3][4]&&matrix[0][1]==matrix[4][5])						
		return matrix[0][1];

	if(matrix[0][2]==matrix[1][3]&&matrix[0][2]==matrix[2][4]&&matrix[0][2]==matrix[3][5]&&matrix[0][2]==matrix[4][6])						
		return matrix[0][2];

	if(matrix[0][6]==matrix[1][5]&&matrix[0][6]==matrix[2][4]&&matrix[0][6]==matrix[3][3]&&matrix[0][6]==matrix[4][2])						
		return matrix[0][6];

	if(matrix[0][6]==matrix[1][5]&&matrix[0][6]==matrix[2][4]&&matrix[0][6]==matrix[3][3]&&matrix[0][6]==matrix[4][2])						
		return matrix[0][6];
	
	if(matrix[0][5]==matrix[1][4]&&matrix[0][5]==matrix[2][3]&&matrix[0][5]==matrix[3][2]&&matrix[0][5]==matrix[4][1])						
		return matrix[0][5];

	if(matrix[0][4]==matrix[1][3]&&matrix[0][4]==matrix[2][2]&&matrix[0][4]==matrix[3][1]&&matrix[0][4]==matrix[4][0])						
		return matrix[0][4];

	if(matrix[0][6]==matrix[1][5]&&matrix[0][6]==matrix[2][4]&&matrix[0][6]==matrix[3][3]&&matrix[0][6]==matrix[4][2])						
		return matrix[0][6];

	if(matrix[1][0]==matrix[2][1]&&matrix[1][0]==matrix[3][2]&&matrix[1][0]==matrix[4][3]&&matrix[1][0]==matrix[5][4])						
		return matrix[1][0];

	if(matrix[1][1]==matrix[2][2]&&matrix[1][1]==matrix[3][3]&&matrix[1][1]==matrix[4][4]&&matrix[1][1]==matrix[5][5])						
		return matrix[1][1];

	if(matrix[1][2]==matrix[2][3]&&matrix[1][2]==matrix[3][4]&&matrix[1][2]==matrix[4][5]&&matrix[1][2]==matrix[5][6])						
		return matrix[1][2];

	if(matrix[1][6]==matrix[2][5]&&matrix[1][6]==matrix[3][4]&&matrix[1][6]==matrix[4][3]&&matrix[1][6]==matrix[5][2])						
		return matrix[1][6];

	if(matrix[1][5]==matrix[2][4]&&matrix[1][5]==matrix[3][3]&&matrix[1][5]==matrix[4][2]&&matrix[1][5]==matrix[5][1])						
		return matrix[1][5];

	if(matrix[1][4]==matrix[2][3]&&matrix[1][4]==matrix[3][2]&&matrix[1][4]==matrix[4][1]&&matrix[1][4]==matrix[5][0])						
		return matrix[1][4];

	if(matrix[2][0]==matrix[3][1]&&matrix[2][0]==matrix[4][2]&&matrix[2][0]==matrix[5][3]&&matrix[2][0]==matrix[6][4])						
		return matrix[2][0];

	if(matrix[2][1]==matrix[3][2]&&matrix[2][1]==matrix[4][3]&&matrix[2][1]==matrix[5][4]&&matrix[2][1]==matrix[6][5])						
		return matrix[2][1];
	
	if(matrix[2][2]==matrix[3][3]&&matrix[2][2]==matrix[4][4]&&matrix[2][2]==matrix[5][5]&&matrix[2][2]==matrix[6][6])						
		return matrix[2][2];

	if(matrix[2][6]==matrix[3][5]&&matrix[2][6]==matrix[4][4]&&matrix[2][6]==matrix[5][3]&&matrix[2][6]==matrix[6][2])						
		return matrix[2][6];
	
	if(matrix[2][5]==matrix[3][4]&&matrix[2][5]==matrix[4][3]&&matrix[2][5]==matrix[5][2]&&matrix[2][5]==matrix[6][1])						
		return matrix[2][5];

	if(matrix[2][4]==matrix[3][3]&&matrix[2][4]==matrix[4][2]&&matrix[2][4]==matrix[5][1]&&matrix[2][4]==matrix[6][0])						
		return matrix[2][4];

	// Pengecekan bila masih ada index yang kosong

	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(matrix[i][j]==' ')
				return ' ';																	
		}
	}

	// Jika tidak maka seri.

	return 'D';
}
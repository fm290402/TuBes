/*Program : Check3x3.c
* Deskripsi : Pemeriksaan apakah sudah memenuhi persyaratan untuk menang, kalah, atau seri pada papan permainan 3x3.
* Nama : Fadhil Muhammad
* tanggal/ versi : 19 - januari - 2021 / 1 
*/

char check_3X3()
{
	int i,j;

	// Pengecekan Baris

	for(i=0;i<3;i++)
		if(matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2])							
			return matrix[i][0];

	// Pengecekan Kolom

	for(i=0;i<3;i++)
		if(matrix[0][i]==matrix[1][i]&&matrix[0][i]==matrix[2][i])							
			return matrix[0][i];

	// Pengecekan Diagonal

	if(matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2])								
		return matrix[0][0];

	if(matrix[0][2]==matrix[1][1]&&matrix[0][2]==matrix[2][0])								
			return matrix[0][2];

	// Pengecekan bila masih ada yang kosong

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matrix[i][j]==' ')
				return ' ';																	
		}
	}

	// Jika tidak ada maka seri

	return 'D';
}
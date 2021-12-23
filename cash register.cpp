#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
char ulang;
int harga;
int jumlah;
int dibayar;
int total;
int code;
do
{
system("cls");
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"========KOPI EQ========"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"====pilih menu yang di inginkan====="<<endl;
	cout<<"1. kopi hitam                        RP.10.000"<<endl;
	cout<<"2. kopi susu                         RP.15.000"<<endl;
	cout<<"3. kopi bulan                        RP.20.000"<<endl;
	cout<<"4. kopi mars                         RP.25.000"<<endl;
	cout<<"5. kopi kristal                      RP.30.000"<<endl;
	cout<<endl;
	
	cout<<"masukan pilihan kopi yang ingin di beli (1-5) = "<<endl;
	cin>>code;
	switch(code)
	{
		case 1 :
				cout<<"kopi hitam"<<endl;
				harga=10000;
				cout<<"masukan jumlah kopi yang di inginkan = ";
				cin>>jumlah;
				cout<<endl;
				total=jumlah*harga;
				cout<<"total harganya adalah = "<<total<<endl;
				cout<<"masukan uang cash = ";
				cin>>dibayar;
				cout<<endl;
				cout<<"struk pembelian kopi EQ"<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"nama kopi                jumlah                 total           dibayar"<<endl;
			cout<<"kopi hitam"<<setw(20)<<harga<<setw(20)<<jumlah<<setw(20)<<dibayar<<setw(20)<<endl;
			
			cout<<"---------------------------------------------------------------------------------------"<<endl;
				cout<<"kembaliannya = "<<dibayar-total<<endl;
				break;
				
				case 2 :
				cout<<"kopi susu"<<endl;
				harga=15000;
				cout<<"masukan jumlah kopi yang di inginkan = ";
				cin>>jumlah;
				cout<<endl;
				total=jumlah*harga;
				cout<<"total harganya adalah = "<<total<<endl;
				cout<<"masukan uang cash = ";
				cin>>dibayar;
				cout<<endl;
				cout<<"struk pembelian kopi EQ"<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"nama kopi                jumlah                 total           dibayar"<<endl;
			cout<<"kopi susu"<<setw(20)<<harga<<setw(20)<<jumlah<<setw(20)<<dibayar<<setw(20)<<endl;
			
			cout<<"---------------------------------------------------------------------------------------"<<endl;
				cout<<"kembaliannya = "<<dibayar-total<<endl;
				break;
				
				case 3 :
				cout<<"kopi bulan"<<endl;
				harga=20000;
				cout<<"masukan jumlah kopi yang di inginkan = ";
				cin>>jumlah;
				cout<<endl;
				total=jumlah*harga;
				cout<<"total harganya adalah = "<<total<<endl;
				cout<<"masukan uang cash = ";
				cin>>dibayar;
				cout<<endl;
				cout<<"struk pembelian kopi EQ"<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"nama kopi                jumlah                 total           dibayar"<<endl;
			cout<<"kopi bulan"<<setw(20)<<harga<<setw(20)<<jumlah<<setw(20)<<dibayar<<setw(20)<<endl;
			
			cout<<"---------------------------------------------------------------------------------------"<<endl;
				cout<<"kembaliannya = "<<dibayar-total<<endl;
				break;
				
				case 4 :
				cout<<"kopi mars"<<endl;
				harga=25000;
				cout<<"masukan jumlah kopi yang di inginkan = ";
				cin>>jumlah;
				cout<<endl;
				total=jumlah*harga;
				cout<<"total harganya adalah = "<<total<<endl;
				cout<<"masukan uang cash = ";
				cin>>dibayar;
				cout<<endl;
				cout<<"struk pembelian kopi EQ"<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"nama kopi                jumlah                 total           dibayar"<<endl;
			cout<<"kopi mars"<<setw(20)<<harga<<setw(20)<<jumlah<<setw(20)<<dibayar<<setw(20)<<endl;
			
			cout<<"---------------------------------------------------------------------------------------"<<endl;
				cout<<"kembaliannya = "<<dibayar-total<<endl;
				break;
				
				case 5 :
				cout<<"kopi kristal"<<endl;
				harga=30000;
				cout<<"masukan jumlah kopi yang di inginkan = ";
				cin>>jumlah;
				cout<<endl;
				total=jumlah*harga;
				cout<<"total harganya adalah = "<<total<<endl;
				cout<<"masukan uang cash = ";
				cin>>dibayar;
				cout<<endl;
				cout<<"struk pembelian kopi EQ"<<endl;
			cout<<"--------------------------------------------------------------------------------------"<<endl;
			cout<<"nama kopi                jumlah                 total           dibayar"<<endl;
			cout<<"kopi kristal"<<setw(20)<<harga<<setw(20)<<jumlah<<setw(20)<<dibayar<<setw(20)<<endl;
			
			cout<<"---------------------------------------------------------------------------------------"<<endl;
				cout<<"kembaliannya = "<<dibayar-total<<endl;
				break;
				
				default:
					cout<<"pilihan anda tidak ada di menu"<<endl;
	}
	cout<<"ingin kembali ke menu kopi EQ (y/t)";
	cin>>ulang;
	cout<<endl;
}
while(ulang!= 't');
cout<<"terimakasih";

return 0;
}

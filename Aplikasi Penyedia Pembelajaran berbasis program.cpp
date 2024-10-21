#include <iostream>
#include <ctime>  //untuk penganggalan 
using namespace std;
int main() {
    int pilihan;
    bool lanjut = true;
    while (lanjut) {
        cout <<"--------------------------------------Students Learning System------------------------------------------------"<<endl;
        cout << endl;
        time_t sekarang = time(0);  // Mendapatkan waktu sekarang dalam detik sejak epoch (1970-01-01)
        tm *ltm = localtime(&sekarang);  // Mengonversi waktu menjadi struct tm yang menyimpan tanggal dan waktu dalam format yang bisa dipahami
        // Menampilkan tanggal dengan format: YYYY-MM-DD
        cout<<"Tanggal: ";
        cout<< 1900 + ltm->tm_year<< "-";  // Tahun dimulai dari 1900
        cout<< 1 + ltm->tm_mon<< "-";      // Bulan dimulai dari 0, jadi kita tambahkan 1
        cout<< ltm->tm_mday<<endl;
        // Menampilkan waktu dengan format: HH:MM:SS
        cout<<"Waktu saat ini: "; //format waktu saat ini
        cout<<ltm->tm_hour<< ":";    // Jam (0-23)
        cout<<ltm->tm_min<< ":";     // Menit (0-59)
        cout<<ltm->tm_sec<<" WIT"<<endl;
        
        cout<<endl;
        cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"                                             H O M E                                                          "<<endl;
        cout<<"--------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"1. Beranda        2. Penerimaan Siswa Baru      3. Sumber Daya Manusia        4. Jurnal         5. Kontak Kami"<<endl;
        cout<<endl;
        int pilihanmenu; // untuk menu beranda
        string statusmenu; // untuk menu beranda
        // untuk bagian Penerimaan Siswa Baru
        string kategoripendaftaran[3] = { "SD/MI", "SMP/MTs", "SMA/SMK/MAN" };
        string daftar;
        string sekolah;
        string namalengkapsiswa;
        int usiasiswa;
        string agamasiswa;
        string domisilisiswa;
        string asalsekolahsiswa;
        bool statuspendaftaran;
        // Bagian untuk Penerimaan Siswa Baru (Daftar / Seleksi)
        string jalurpendaftaran[2] = { "Reguler", "Prestasi" };
        string jenis_prestasi [5] ={"Beladiri","Akademik","Atletik","Predikat","Lainnya"};
        string prestasi;  //untuk kategori jalur pendaftaran prestasi
        string statusprestasi;
        string pilihjalur;
        int nomorpendaftaran [5] = {112, 311, 455, 324, 190};
		int nomorseleksi;
        string jadwal_seleksi [5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};
        bool statusseleksi;
        // untuk bagian biro sumber daya manusia
        string informasisdm[5] = { "Beranda", "Organisasi", "Ujian & Tugas-Tugas", "Kehadiran" };
        string sumberdayamanusia;
        string layanansdm;
        int unitkegiatansiswa;
        bool statussdm;
        cout<<"Masukkan Pilihan Menu : ";
        cin>>pilihanmenu;
        switch (pilihanmenu) {
            case 1:
                statusmenu = "1. Beranda";
                cout<<"Status Menu = "<<statusmenu<<endl;
                cout<<"---------------------------------------Students Learning System----------------------------------------------"<<endl;
                cout<<"                                            B E R A N D A                                                    "<<endl;
                cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
                cout<<"# Penerimaan Siswa Baru : "<<endl;
                cout<<"  + Penerimaan Siswa Baru Tahun Ajaran 2024/2025 Telah Dibuka."<<endl;
                cout<<"# Sumber Daya Manusia : "<<endl;
                cout<<"  + Pemberdayaan Sumber Daya Manusia di Lingkungan Akademik Kini Hadir Melalui Modul SiPintar"<<endl;
                cout<<"  + Penjaringan Bakat dan Potensi Siswa Baru Dilaksanakan Pada Awal Masuk Sekolah Guna Mengembangkan Potensi Siswa"<<endl;
                cout<<"# Kontak Kami : "<<endl;
                cout<<"  + Telepon : 11223344"<<endl;
                cout<<"  + Email   : studenslearningsystem@gmail.com"<<endl;
                cout<<"  + WhatsApp: StudentsSYS - 09090909"<<endl;
                cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
                break;
            case 2:
                statusmenu = "2. Penerimaan Siswa Baru";
                cout<<"Status Menu = "<<statusmenu<<endl;
                cout<<"-------------------------------------Students Learning System-----------------------------------------------"<<endl;
                cout<<"                                      PENERIMAAN  SISWA  BARU                                               "<<endl;
                cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
                for (int a = 0; a < 3; a++) {
                    cout<<"Kategori Pendaftaran ke"<<a<<" adalah "<<kategoripendaftaran[a]<<endl; // menampilkan semua kategori pendaftaran
                }
                cout<<"TELAH DIBUKA PENDAFTARAN VIA JALUR REGULER DAN PRESTASI UNTUK PESERTA DIDIK BARU :"<<endl;
                cout<<endl;
                for(int b = 0; b < 2; b++){
                	cout<<"Pendaftaran Jalur Seleksi ke "<<b<<" = "<<jalurpendaftaran[b]<<endl;  //menampilkan seluruh kategori jalur pendaftaran
				}
                cout<<"Apakah Anda Ingin Mendaftar (y/n): ";
                cin>>daftar;
                if (daftar == "y") {
                    cout << "Catatan : Masukkan Nama Tingkatan Sekolah Pada Menu Kategori Pendaftaran" << endl;
                    cout << "Contoh  : SD/MI" << endl;
                    cout << "          SMP/MTs" << endl;
                    cout << "          SMA/SMK/MAN" << endl;
                    cout << "------------------------------------------------------------------------" << endl;
                    cout << "ANDA MENDAFTAR PENERIMAAN SISWA BARU" << endl;
                    cout << "Masukkan Kategori Pendaftaran Siswa : ";
                    cin >> daftar;
                    cout << "Sekolah Negeri / Swasta (Muslim)    : ";
                    cin >> sekolah;
                    cout<<" Jalur Pendaftaran Siswa Baru         : ";
                    cin>>pilihjalur;
                    if (daftar == kategoripendaftaran[0]) {
                        cout<<"Anda Mendaftar Kategori "<<kategoripendaftaran[0]<<endl;
                        statuspendaftaran = true;
                        if (sekolah == "Negeri") {
                            cout<<"Sekolah Negeri"<<endl;
                            cout<<"------------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH NEGERI TINGKAT (SD/MI)"<<endl;
                            statuspendaftaran = true;
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // kategori jalur pendaftaran reguler
                                cout<<"---------------------------JALUR REGULER-----------------------------------------------"<<endl;
                                cout<<endl;
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int c = 0; c < 5; c++){  //bagian untuk menampilkan nomor pendaftaran kategori SD/MI Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[c]<<endl;
								}   
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
							cout<<"-------------------------------------JALUR PRESTASI---------------------------------------------"<<endl;	
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // kategori jalur pendaftaran prestasi
                                cout<<endl;
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int d = 0; d < 10; d++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[d]<<endl;
								}
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int e = 0; e < 5; e++) {
    								cout<<(e + 1)<< ". "<<jenis_prestasi[e]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							
								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;
								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;	
                       cout<<endl;
					   cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
					   cout<<"                                    TINGKAT SD (SWASTA)                                                     "<<endl;
                        } else if (sekolah == "Swasta") {
                            cout<<"Sekolah Swasta (Muslim)"<<endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH SWASTA (MUSLIM) TINGKAT (SD/MI)"<<endl;
                            statuspendaftaran = true;
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl; // reguler
                            	//untuk reguler kategori Swasta SD/MI
                           		cout<<"------------------------------JALUR REGULER (SWASTA)--------------------------------------------"<<endl;
                            	cout<<"Nomor Pendaftaran Swasta (SD/MI) Reguler : "<<endl; //menampilkan nomor pendaftaran SD/MI reguler
                           		for (int f = 0; f < 10; f++){
                            	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[f]<<endl;
							  }
                            	cout<<endl;
                            	cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}	
                                break;  
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl; // prestasi
                            	//untuk prestasi kategori swasta SD/MI
                            	 cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int d = 0; d < 10; d++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[d]<<endl;
								}
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int e = 0; e < 5; e++) {
    								cout<<(e + 1)<< ". "<<jenis_prestasi[e]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							
								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;
								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;
                        //----------------------------------------------------------S M P---------------------------------------------------------------------------------------//
                    } else if (daftar == kategoripendaftaran[1]) {
                        cout<<"Anda Mendaftar Kategori "<<kategoripendaftaran[1]<<endl;

                        if (sekolah == "Negeri") {  // Pilihan kategori SMP Negeri
                            cout<<"Sekolah Negeri"<<endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH NEGERI TINGKAT (SMP/MTs)"<<endl;
                            statuspendaftaran = true;
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // reguler   
                                cout<<"Sekolah Negeri"<<endl;
                            cout<<"------------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH NEGERI TINGKAT (SMP/MTS)"<<endl;
                            statuspendaftaran = true;
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // kategori jalur pendaftaran reguler
                                cout<<"---------------------------JALUR REGULER-----------------------------------------------"<<endl;
                                cout<<endl;
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int f = 0; f < 5; f++){  //bagian untuk menampilkan nomor pendaftaran kategori SMP/MTS Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[f]<<endl;
								}   
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
							cout<<"-------------------------------------JALUR PRESTASI---------------------------------------------"<<endl;	
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // kategori jalur pendaftaran prestasi
                                cout<<endl;
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int g = 0; g < 10; g++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[g]<<endl;
								}
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int h = 0; h < 5; h++) {
    								cout<<(h + 1)<< ". "<<jenis_prestasi[h]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							
								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;
								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;	
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // prestasi
                            }
                        } else if (sekolah == "Swasta") {  // Pilihan kategori SMP Swasta
                            cout<<"Sekolah Swasta (Muslim)" << endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH SWASTA (MUSLIM) TINGKAT (SMP/MTs)"<<endl;
                            statuspendaftaran = true;
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // reguler
                                 cout<<"---------------------------JALUR REGULER-----------------------------------------------"<<endl;
                                cout<<endl;
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int i = 0; i < 5; i++){  //bagian untuk menampilkan nomor pendaftaran kategori SMP/MTS Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[i]<<endl;
								}   
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // prestasi
                                 cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int j = 0; j < 10; j++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[j]<<endl;
								}
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int k = 0; k < 5; k++) {
    								cout<<(k + 1)<< ". "<<jenis_prestasi[k]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							
								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;
								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;			
					//---------------------------------------------------SMA---------------------------------------------------------------------//
                    } else if (daftar == kategoripendaftaran[2]) {
                        cout<<"Anda Mendaftar Kategori "<<kategoripendaftaran[2]<<endl;

                        if (sekolah == "Negeri") {  // Pilihan kategori SMA Negeri
                            cout<<"Sekolah Negeri" << endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH NEGERI TINGKAT (SMA/SMK/MAN)"<<endl;
                            statuspendaftaran = true;
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // reguler
                                 cout<<"---------------------------JALUR REGULER-----------------------------------------------"<<endl;
                                cout<<endl;
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int l = 0; l < 5; l++){  //bagian untuk menampilkan nomor pendaftaran kategori SD/MI Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[l]<<endl;
								}   
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // prestasi
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int m = 0; m < 10; m++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[m]<<endl;
								}
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int n = 0; n < 5; n++) {
    								cout<<(n + 1)<< ". "<<jenis_prestasi[n]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							
								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;
								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;	
                            }  
                        } else if (sekolah == "Swasta") {  // Pilihan kategori SMA Swasta
                            cout<<"Sekolah Swasta (Muslim)" << endl;
                            cout<<"----------------------------------------------------------------"<<endl;
                            cout<<"PENDAFTARAN SISWA BARU JALUR SEKOLAH SWASTA (MUSLIM) TINGKAT (SMA/SMK/MAN)"<<endl;
                            statuspendaftaran = true;
                            
                            if (pilihjalur == jalurpendaftaran[0]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[0]<<endl;  // reguler
                                
                                cout<<"Nomor Pendaftaran Peserta Didik Baru (Reguler) :"<<endl;
                                for (int o = 0; o < 5; o++){  //bagian untuk menampilkan nomor pendaftaran kategori SD/MI Reguler
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[o]<<endl;
								}   
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
								switch (nomorseleksi){
									case 112:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[0]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
										break;
									case 311:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[1]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
										break;
									case 455:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[2]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
										break;
									case 324:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[3]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
										break;
									case 190:
										cout<<"Nomor seleksi SD/MI reguler Anda adalah = "<<nomorpendaftaran[4]<<endl;
										cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
										break;
									default:
										cout<<"Nomor seleksi tidak terdaftar di SD/MI reguler. Silahkan cari nomor yang lain"<<endl;
										break;
								}
							break;
                            } else if (pilihjalur == jalurpendaftaran[1]) {
                                cout<<"Anda mendaftar pada jalur seleksi kategori = "<<jalurpendaftaran[1]<<endl;  // prestasi
                                
                                 cout<<"Nomor Pendaftaran Peserta Didik Baru (Prestasi) : "<<endl;
                                for (int p = 0; p < 10; p++){
                                	cout<<" . Nomor Pendaftaran Tersedia ke - "<<nomorpendaftaran[p]<<endl;
								}
								cout<<"Silahkan ambil nomor pendaftaran reguler Anda : "<<endl;
								cout<<"Nomor Seleksi Anda : ";   //input ambil nomor seleksi
								cin>>nomorseleksi;
                                break;
                           		cout<<"Jenis Prestasi : "<<endl;  // Menampilkan berbagai macam jenis prestasi yang diterima
                           		for (int q = 0; q < 5; q++) {
    								cout<<(q + 1)<< ". "<<jenis_prestasi[q]<<endl;  // Menampilkan jenis-jenis prestasi dengan indeks 1-5
								}							
								// Meminta input pengguna untuk memilih prestasi
								cout<<"Masukkan jenis prestasi yang sesuai: ";
								cin>>prestasi;
								// Menampikan jenis-jenis prestasi berdasarkan input
								if (prestasi == jenis_prestasi[0]) {   
    								statusprestasi = jenis_prestasi[0];
   						    		cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[0]<<endl;
   						    		cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[0]<<endl;
   						    		break;
								} else if (prestasi == jenis_prestasi[1]) {
    								statusprestasi = jenis_prestasi[1];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[1]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[1]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[2]) {
    								statusprestasi = jenis_prestasi[2];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[2]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[2]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[3]) {
    								statusprestasi = jenis_prestasi[3];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[3]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[3]<<endl;
    								break;
								} else if (prestasi == jenis_prestasi[4]) {
    								statusprestasi = jenis_prestasi[4];
    								cout<<"Pendaftar memiliki prestasi dibidang "<<jenis_prestasi[4]<<endl;
    								cout<<"Jadwal Seleksi Anda                     = "<<jadwal_seleksi[4]<<endl;
    								break;
								} else {
    								cout<<"Jenis prestasi tidak dikenali."<<endl;
    								break;
								}
							}
							break;
                	} else {
                    	cout<<"Tidak ada pendaftaran yang dilakukan."<<endl;
                	}
                	break;
            	}
            
            
            case 3 :
            	statusmenu = "Sumber Daya Manusia";
            	cout<<"Status menu = "<<statusmenu<<endl;
            	cout<<endl;
            	cout<<"|------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            	cout<<"|                                                 SUMBER DAYA MANUSIA                                                          |"<<endl;
            	cout<<"|------------------------------------------------------------------------------------------------------------------------------|"<<endl;
            	
            	cout<<endl;
            	cout<<"Layanan Sumber Daya Manusia Tersedia : "<<endl;
            	for (int r = 0; r < 5; r++){
            		cout<<" .Layanan Sumber Daya Manusia ke - "<<r<<" adalah "<<informasisdm[r]<<endl;	//menampilkan menu sumber daya manusia
				}
				
				cout<<endl;
				cout<<"Masukkan berupa nama layanan | Contoh : Beranda, dst..."<<endl;
				cout<<"Pilih Menu Layanan Sumber Daya Manusia : "; //masuk menu sumber daya manusia (tipe string)
				cin>>sumberdayamanusia;
				
				if(sumberdayamanusia == informasisdm[0]){
					cout<<"Layanan SDM = "<<informasisdm[0]<<endl;
					
					cout<<"|-----------------------------------------------------------------------------------------------------------------------|"<<endl;
					cout<<"|                                                 Beranda SDM                                                           |"<<endl;
					cout<<"|-----------------------------------------------------------------------------------------------------------------------|"<<endl;
					
					cout<<"  + Pemberdayaan Sumber Daya Manusia di Lingkungan Akademik Kini Hadir Melalui Modul SiPintar"<<endl;
                	cout<<"  + Penjaringan Bakat dan Potensi Siswa Baru Dilaksanakan Pada Awal Masuk Sekolah Guna Mengembangkan Potensi Siswa"<<endl;
                	cout<<"  + Telah Dibuka Pertukaran Pelajar Tingkat SMA/MA Untuk Satu Bulan Di Sekolah Tunas Bangsa"<<endl;
					break;
					
				}else if(sumberdayamanusia == informasisdm[1]){
					cout<<"Layanan SDM = "<<informasisdm[1]<<endl;
					
					cout<<"|-----------------------------------------------------------------------------------------------------------------------|"<<endl;
					cout<<"|                                               ORGANISASI                                                              |"<<endl;
					cout<<"|-----------------------------------------------------------------------------------------------------------------------|"<<endl;
					
					string kegiatansiswa [5] = {"OSIS", "Pramuka", "Kesehatan", "Media Informasi", "Atlet"};
					for (int s = 0; s < 5; s++){
						cout<<"UNIT KEGIATAN SISWA SEKOLAH : "<<endl;
						cout<<"Unit Kegiatan Siswa ke "<<s<<" adalah = "<<kegiatansiswa[s]<<endl;
						cout<<endl;
					}
					
					int pilihunit;
					
					cout<<"Pilih Unit Kegiatan Siswa : ";  //input pilihan Unit Kegiatan Siswa
					cin>>pilihunit;
					
				switch (pilihunit) { //pilih unit kegiatan siswa
    				case 1: {
        				int personilosis = 123;
        				cout<<"OSIS (Organisasi Siswa Sekolah)"<<endl;
        				cout<<"Ketua OSIS = UZUMAKI NARUTO "<<endl;
        				cout<<"Unit Kegiatan Siswa terbesar dan tertua di sekolah. Mendidik dan melatih siswanya menjadi orang yang berkompeten"<<endl;
        				cout<<"Jumlah personil = "<<personilosis<<endl;
        				break;
    				}
    				case 2: {
        				int personilpramuka = 135;
        				cout<<"Pramuka"<<endl;
        				cout<<"Pramuka adalah unit kegiatan siswa yang mana bersifat semi militer dengan tujuan menumbuhkan solidaritas"<<endl;
        				cout<<"Ketua Pramuka = Teguh Chandra Baskara S.Kom"<<endl;
        				cout<<"Jumlah personil = "<<personilpramuka<<endl;
        				break;
    				}
    				case 3: {
        				int personilkesehatan = 54;
        				cout<<"Kesehatan Sekolah"<<endl;
        				cout<<"Sehat itu penting, maka dibentuklah unit kesehatan sekolah demi menjaga dan mengajarkan gaya hidup sehat di sekolah"<<endl;
        				cout<<"Ketua Kesehatan Sekolah = Dr. Hinata Hyuuga S.Kes."<<endl;
        				cout<<"Jumlah personil = "<<personilkesehatan<<endl;
        				break;
    				}
    				case 4: {
        				int personilit = 36;
        				cout<<"Media Informasi" << endl;
        				cout<<"Budayakan melek teknologi informasi"<<endl;
        				cout<<"Ketua Media Informasi = Nara Shikamaru S.T M.Kom.,"<<endl;
        				cout<<"Jumlah personil = "<<personilit<<endl;
        				break;
    				}
    				case 5: {
        				int personilatlet = 87;
        				cout<<"Atlet"<<endl;
        				cout<<"Kuatkan ototmu demi prestasi bersama"<<endl;
        				cout<<"Ketua Atlet = Shin Tae Yong"<<endl;
        				cout<<"Jumlah personil = "<<personilatlet<<endl;
        				break;
    				}
    				default: {
        				cout<<"TIDAK VALID"<<endl;   //tidak valid karena inputan salah
        				break;
    				}
				}


				}else if(sumberdayamanusia == informasisdm[2]){
					cout<<"Layanan SDM = "<<informasisdm[2]<<endl;
					
					cout<<"|---------------------------------------------------------------------------------------------------------|"<<endl;
					cout<<"|                                      UJIAN DAN TUGAS-TUGAS                                              |"<<endl;
					cout<<"|---------------------------------------------------------------------------------------------------------|"<<endl;
					
					int menuujian;
					int bobotpenilaian ; 
					int kehadiran ;  //setiap kehadiran terhitung 10persen
					int hasiltugasujian;
					bool nilai; 
					
					string ujian [3] = {"Praktikum", "Sekolah", "Nasional"};
					string tugastugas [2] = {"biasa", "besar"};
					
					for(int t = 0; t < 3; t++){
						cout<<t<<" Ujian tingkat - "<<ujian[t]<<endl;
					}
					
					cout<<"Pilih menu : "<<endl;
					cout<<"Menu              = ";
					cin>>menuujian;
					cout<<"Kehadiran         = ";
					cin>>kehadiran;
					cout<<"NIlai TUGAS/UJIAN = ";
					cin>>hasiltugasujian;
					
					
					switch(menuujian){
						case 1 :
							cout<<"Praktikum"<<endl;
							bobotpenilaian = (kehadiran * 10) + hasiltugasujian ;
							cout<<bobotpenilaian<<endl;
							break;
						
						case 2 :
							cout<<"Sekolah"<<endl;
							bobotpenilaian = (kehadiran * 10) + hasiltugasujian;
							cout<<bobotpenilaian<<endl;
							break;
							
						case 3 :
							cout<<"Nasional"<<endl;
							bobotpenilaian = (kehadiran * 10) + hasiltugasujian;
							cout<<bobotpenilaian<<endl;
							break;
						
						default :
							cout<<"TIDAK VALID"<<endl;
							break;
					}
					
				}else if(sumberdayamanusia == informasisdm[3]){
					cout<<"Layanan SDM = "<<informasisdm[3]<<endl;
																			//menampilkan bagian kesiswaan
					cout<<"|-----------------------------------------------------------------------------------------------------|"<<endl;
					cout<<"|                                      KEHADIRAN SISWA                                                |"<<endl;
					cout<<"|-----------------------------------------------------------------------------------------------------|"<<endl;
					
					string siswa[6] = {"Joko", "Bayu", "Alfi", "Ridwan", "Bagas", "Azka"};
					int totalsiswa ; 
					string namasiswa ;
					float kehadiran;
					bool status;
					
					totalsiswa = 1 * 6 ;
					cout<<"Masukkan nama siswa : ";  //input kehadiran siswa berdasarkan nama siswa
					cin>>namasiswa;
					
					if (namasiswa == siswa[0]){
						namasiswa = siswa[0];
						kehadiran = 88.9;
						cout<<"---------------------"<<endl;
						cout<<"Nama Siswa	: "<<namasiswa<<siswa<<endl;
						status = true;
						break;
					}else if (namasiswa == siswa[1]){
						namasiswa = siswa[1];
						kehadiran = 72.9;
						cout<<"---------------------"<<endl;
						cout<<"Nama Siswa	: "<<namasiswa<<siswa<<endl;
						status = true;
						break;
					}else if (namasiswa == siswa[2]){
						namasiswa = siswa[2];
						kehadiran = 78.9;
						cout<<"---------------------"<<endl;
						cout<<"Nama Siswa	: "<<namasiswa<<siswa<<endl;
						status = true;
						break;
					}else if (namasiswa == siswa[3]){
						namasiswa = siswa[3];
						kehadiran = 60.0;
						cout<<"---------------------"<<endl;
						cout<<"Nama Siswa	: "<<namasiswa<<siswa<<endl;
						status = false;
						break;
					}else if (namasiswa == siswa[4]){
						namasiswa = siswa[4];
						kehadiran = 99.0;
						cout<<"---------------------"<<endl;
						cout<<"Nama Siswa	: "<<namasiswa<<siswa<<endl;
						status = true;
						break;
					}else if (namasiswa == siswa[5]){
						namasiswa = siswa[5];
						kehadiran = 27.9;
						cout<<"---------------------"<<endl;
						cout<<"Nama Siswa	: "<<namasiswa<<siswa<<endl;
						status = false;
						break;
					}else if(namasiswa == siswa[6]){
						namasiswa = siswa[6];
						kehadiran = 86.9;
						cout<<"---------------------"<<endl;
						cout<<"Nama Siswa	: "<<namasiswa<<siswa<<endl;
						status = true;
						break;
					}else{
						namasiswa == siswa[0];
						kehadiran = 0;
						cout<<"---------------------"<<endl;
						cout<<"Nama Siswa	: TIDAK TERDETEKSI"<<endl;
						status = false;
						break;
					}
				}else{
					cout<<"Layanan Tidak Tersedia"<<endl;  //layanan tidak tersedia apabila inputan tidak sesuai
					break;
				}
			
			case 4 :  //layanan Jurnal
				statusmenu = "Jurnal";
				cout<<"Status menu = "<<statusmenu<<endl;
				cout<<"Jurnal Belum Tersedia Saat Ini. Silahkan Tunggu Update Terbaru nya. Terima Kasih"<<endl;
				cout<<endl;
				break;
			
			case 5 : //Layanan Kontak Kami
				statusmenu = "Kontak Kami";
				cout<<"Status menu = "<<statusmenu<<endl;
				cout<<endl;
				
				int kontaktelp = 123;
				string email = "studenslearningsystem@gmail.com";
				
				cout<<"Kontak Telepon = "<<kontaktelp<<endl;
				cout<<"Email          = "<<email<<endl;
				break;
				
				
            }else{
                cout<<"Pilihan tidak valid, silakan pilih menu yang tersedia."<<endl;
                break;
        	}
        }
    }
        // Menanyakan apakah ingin melanjutkan atau keluar
        char jawaban;
        cout<<"Apakah Anda ingin melanjutkan (y/n)? ";
        
        cin>>jawaban;
        if (jawaban == 'n' || jawaban == 'N') {
            lanjut = false;
        }
	}	
	
    cout<<"Terima kasih telah menggunakan Students Learning System!"<<endl;  //sistem menyatakan program selesai
    
    return 0;
}




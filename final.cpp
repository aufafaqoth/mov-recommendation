#include <iostream>

using namespace std;

int main()
{
    int umur, pilih;
    char y,n,out;

    cout << " ___________________________________________________________\n";
    cout << "|                     Rekomendasi Film                      |\n";
    cout << "|___________________________________________________________|\n";
    cout << "|oleh :                                                     |\n";
    cout << "|                        Kelompok 4                         |\n";
    cout << "|                     1.Audenza Maulana                     |\n";
    cout << "|                 2.Aufa Salsabila Nahrowi                 |\n";
    cout << "|             3.Muhammad Fajrul Halim Pratama               |\n";
    cout << "|___________________________________________________________|\n" << endl;

    do {
    cout << "Masukkan Umur : ";
    cin >> umur;
    cout << "\n";

    if(umur < 12){
            cout << "Berikut rekomendasi dari kami " << endl;
            cout << "\n";
            cout << "1.Spirited Away" << endl;
            cout << "2.The Boss Baby" << endl;
            cout << "3.Toy Story Movie Series" << endl;
            cout << "4.TinkerBell Movie Series" << endl;
            cout << "5.Charlie and The Chocolate Factory" << endl;

            cout << "\n";
            cout << "Masukkan nomor film untuk lihat sinopsis dan review : ";cin >> pilih;
            cout << endl;
    switch(pilih){
        case 1:
            cout << "Spirited Away \n" << endl;
            cout << "Sinopsis : \n" << endl;
            cout << "Bercerita tentang kisah seorang gadis berumur 10 tahun bernama Chihiro dan kedua orang tuanya yang masuk ke sebuah tempat\n";
            cout << "yang terlihat sebagai sebuah taman hiburan yang terabaikan. Setelah kedua orangtuanya berubah menjadi babi rakasa,\n";
            cout << "Chihiro bertemu dengan sosok misterius Haku yang menjelaskan kepadanya bahwa tempat mereka berada adalah sebuah resort dimana\n";
            cout << "makhluk supernatural berisitrahat dari alam duniawi.Untuk dapat membebaskan kedua orangtuanya,Chihiro harus bekerja di\n";
            cout << "sebuah bath house yang dikepalai oleh seorang penyihir yang bernama Yubaba\n" << endl;
            cout << "Review : \n" << endl;
            cout << "Film ini mengisahkan bagaimana perjuangan seorang gadis kecil untuk bisa menyelamatkan dirinya dan orang tuanya\n";
            cout << "dari tempat supernatural tersebut yang tentunya tidak akan mudah dan selalu dikelilingi oleh makhluk-makhluk\n";
            cout << "supernatural. Dalam film ini juga menunjukkan cerita-cerita yang bisa memberi pelajaran kepada anak, seperti contohnya\n";
            cout << "jangan terlalu rakus dan tamak yang ditunjukkan oleh orang tua Chihiro yang akhirnya berubah jadi babi yang merupakan\n";
            cout << "hewan yang rakus. Meskipun bagus untuk ditonton anak-anak, tapi tetap harus dibimbing  oleh orang tua agar anak tidak salah\n";
            cout << "tangkap akan film nya. Kelebihan lain dari film ini adalah dianugerahi piala oscar sebagai film animasi terbaik, jadi\n";
            cout << "tidak perlu diragukan karyanya. Kekurangannya adalah pengisi suara nya adalah jepang, tapi sudah ada subtitle jadi tidak masalah\n" << endl;
            break;
        case 2:
            cout << "The Boss Baby \n" << endl;
            cout << "Sinopsis : \n" << endl;
            cout << "Kisahnya berawal dari Tim Templeton, bocah berusia 7 tahun yang merasa kehidupannya sangat sempurna.Sebagai\n";
            cout << "anak tunggal, Tim sangat disayang oleh kedua orang tuanya, Ted dan Janice. Sayangnya kebahagiaan Tim tidak\n";
            cout << "berlangsung lama karena datangnya anggota baru, bayi laki-laki yang sangat menggemaskan bernama Theodore alias\n";
            cout << "Boss Baby. Bencana pun mulai datang, Tim yang sudah terbiasa dimanja orang tuanya terpaksa harus berbagi kasih\n";
            cout << "sayang dengan Boss Baby. Kehadiran Boss Baby pun membuat hari-hari Tim berubah 180 derajat.\n" << endl;
            cout << "Review : \n" << endl;
            cout << "Film ini sangat amat cocok untuk anak-anak, karakter nya lucu dan imut menjadi nilai plus tersendiri. Tidak \n";
            cout << "hanya itu, karakter yang walaupun hanya seorang bayi tetapi berlagak seperti layaknya boss, bahkan kakaknya sendiri Tim sampai\n";
            cout << "bingung dan kesal dalam menanggapi adiknya Theodore. Ada bumbu-bumbu aksi sedikit membuat ceritanya menarik walaupun \n";
            cout << "alurnya sederhana, dan ya karena film untuk anak juga. Kelebihan film ini mengajarkan anak-anak bagaimana untuk bisa\n";
            cout << "saling mengerti dan memahami antara satu saudara dan juga saling menghargai dan menyayangi sesama saudara dan keluarga.\n";
            cout << "Kekurangannya hanya dalam alur yang sangat mudah tertebak, tapi sekali lagi ini film anak yang tak terlalu perlu alur\n";
            cout << "yang terlalu kompleks dan berat. Overall film ini sangat bagus dan recomended." << endl;
            break;
        case 3:
            cout << "Toy Story Movie Series \n" << endl;
            cout << "Sinopsis : \n" << endl;
            cout << "Sinopsis ini diambil dari film pertama Toy Stories, karena film ini memiliki 4 film yang ceritanya lanjut terus menerus\n";
            cout << "Woody, mainan favorit Andy, khawatir jika setelah Andy menerima hadiah ulang tahunnya, yaitu mainan baru bernama Buzz,\n";
            cout << "dia akan dilupakan. Lantas, ia pun membuat rencana untuk menyingkirkan Buzz.\n";
            cout << "Review : \n" << endl;
            cout << "Bagaimana jika mainan bisa hidup?, ya itulah gambaran dari film Toy Stories. Film yang punya 4 Series ini mengisahkan perjalanan\n";
            cout << "Woody dan teman-temannya agar bisa tetap dimainkan walaupun anak yang mempunyai mainannya sudah dewasa dan tidak memainkan \n";
            cout << "mereka lagi. Kelebihan film ini adalah alurnya yang membuat hubungan antar karakternya yang terus berkembang dan juga karena\n";
            cout << "ada 4 series, jadi bisa isi waktu luang dengan menonton semua seriesnya. Kekurangannya sama yaitu karena ada banyak series,\n";
            cout << "terkadang orang-orang dan anak-anak bosan untuk menontonnya, mungkin bisa diakali oleh orang tua untuk menjadwalkan waktu menonton\n";
            cout << "But overall, film ini recomended." << endl;
            break;
        case 4:
            cout << "TinkerBell Movie Series \n" << endl;
            cout << "Sinopsis \n" << endl;
            cout << "Sinopsis ini diambil dari film pertama TinkerBell, karena film ini memiliki 6 film yang memiliki cerita tentang TinkerBell dkk\n";
            cout << "Bersamaan tawa manis bayi, sesosok peri baru lahir. Ratu Clarion dan peri dari Pixie Hollow gelisah menyambut kedatangannya,\n";
            cout << "dan Ratu pun menginstruksikan untuk segera menemukan bakatnya.\n";
            cout << "Review : \n" << endl;
            cout << "Film animasi yang banyak seriesnya ini berkisah tentang TinkerBell dalam menemukan jati dirinya dan juga sekalian berpetualang\n";
            cout << "dengan peri dari ras lainnya. Dan semakin berjalan waktu, rintangan yang dihadapi TinkerBell dkk pun terus meningkat. Kelebihan\n";
            cout << "film ini yaitu sangat cocok ditonton oleh siapapun baik anak laki-laki maupun perempuan. Karena ceritanya tentang bertualang dan\n";
            cout << "mencari jati diri, bisa sebagai acuan bagi anak-anak untuk bisa menemukan jati dirinya. Kekurangannya hanya di series nya yang banyak\n";
            cout << "yang bagi sebagian orang dan anak mungkin malas untuk mengikutinya. Tapi jika sudah menonontonnya pasti akan suka dan akan di\n";
            cout << "tonton sampai selesai. Film ini recomended." << endl;
            break;
        case 5:
            cout << "Charlie and The Chocolate Factory \n" <<endl;
            cout << "Sinopsis : \n" << endl;
            cout << "Charlie, bocah dari keluarga miskin, memenangkan sebuah tiket emas bersama dengan empat anak lainnya. Hadiahnya, mereka akan diajak\n";
            cout << "berkeliling ke dalam pabrik coklat paling menakjubkan di dunia." << endl;
            cout << "Review : \n" << endl;
            cout << "Film ini becerita tentang Charlie, anak yang datang dari keluarga yang kurang yang pada suatu hari dia mendapatkan sebuah tiket emas\n";
            cout << "dan diperbolehkan pergi ke pabrik coklat. Disanalah ia bertemu Willy Wonka sang pemilik pabrik. Saat tur berkeliling dengan anak lainnya\n";
            cout << "kejadian demi kejadian hadir, dan pada saat akhirnya Charlie berhasil lewat dari sana. Kelebihan film ini bisa untuk mengajari anak\n";
            cout << "menjadi disiplin karena melihat kejadian yang silahkan ditonton filmnya. Kekurangan banyak kejadian tersebut lumayan keras dan harus\n";
            cout << "dibimbing oleh orang tua. Overall film ini recomended" << endl;
            break;
        default:
            cout << "ERROR.\nYANG ANDA MASUKKAN SALAH.\n";
            break;
        }
     } else if (umur >=12 && umur <= 17){
        cout << "\nRekomendasi dari kami :\n";
        cout << "1. Mulan\n";
        cout << "2. A Wrinkle In Time\n";
        cout << "3. Yowis Ben\n";
        cout << "4. Hit & Run\n";
        cout << "5. High School Musical: The Musical: The Series\n";

        cout << "Masukkan pilihan: ";
        cin >> pilih;

        switch(pilih){
        case 1:
            cout <<"\n                        MULAN\n";
            cout << "                       -Aksi-\n";
            cout << "\nMenyamar sebagai prajurit pria untuk melindungi ayahnya\n";
            cout << "dan menguji setiap langkahnya, Mulan harus memanfaatkan\n";
            cout << "kekuatan batinnya dan merangkul potensi sejatinya.\n\n";
            cout << "                Review dari kami\n\n";
            cout << "Dalam film ini Mulan mengajarkan kita bahwa sebagai anak perempuan harus tangguh.\n";
            cout << "Dan tidak kenal menyerah. Dan film ini juga mengajarkan kita bahwa kita harus menjadi seorang\n";
            cout << "yang setia, berani, dan jujur. Seperti yang tertulis di pedangnya Mulan.\n\n ";
            break;

        case 2:
            cout << "\n           A Wrinkle In Time\n";
            cout << "               -Fantasi-\n";
            cout << "\nSetelah menghilangnya ayah ilmuwannya,\n";
            cout << "Meg, bersama adik laki-lakinya dan temannya\n";
            cout << "dikirim untuk menemukan ayahnya.\n\n";
            cout << "          Review dari kami\n\n";
            cout << "Film ini diangkat dari sebuah novel karangan Madeleine L'Engle.\n";
            cout << "Kemudian, di jadikan sebuah film yang di sutradarai oleh Ava DuVernay dengan visualisasi yang bagus.\n";
            cout << "Dan film ini sangat cocok ditonton bersama keluarga.\n\n";
            break;
        case 3:
            cout << "\n                                     Yowis ben\n";
            cout << "                                     -Komedi-\n";
            cout << "\nBayu bukan anak yang populer di sekolahnya. Dia memutuskan untuk membentuk sebuah band\n";
            cout << "bersama teman dekatnya, untuk mendapatkan perhatian seorang perempuan yang dia suka.\n";
            cout << "Secara tidak sengaja, mereka menamai bandnya dengan nama 'Yowis Band, mereka mulai menemukan\n";
            cout << "jati diri meraka sendiri.\n\n";
            cout << "                               Review dari kami\n\n";
            cout << "Mengisahkan tokoh utama, Bayu, yang ingin sekali membuat band. Pada film ini mengisahkan perjuangan\n";
            cout << "Bayu mencari orang yang terbaik untuk membuat bandnya menjadi kenyataan. Tidak hanya menceritakan kehidupan\n";
            cout << "Bandnya film ini juga menceritakan tentang kehidupan pribadi masing-masing anggota Yowis Ben. Dan film ini sangat\n";
            cout << "mengendalikan emosi penonton.\n\n";
            break;
        case 4:
            cout << "\n                                 Hit & Run\n";
            cout << "                                  -Aksi-\n";
            cout << "\nTegar Saputra, polisi selebriti yang memiliki reality show sendiri, ditugaskan untuk\n";
            cout << "menangkap Coki, gembong narkoba yang baru saja kabur dari penjara.\n";
            cout << "Sayangnya kali ini Tegar harus dijodohkan dengan Lio, seorang penipu.\n";
            cout << "Tegar yang terbiasa berakting sendiri, kini harus berusaha menyelesaikan misinya\n";
            cout << "bersama Lio yang malah bikin sulit. Pencarian Tegar dan Lio untuk Coki ditemani oleh\n";
            cout << "Meisa, seorang penyanyi, dan Jefri.\n\n";
            cout << "                             Review dari kami\n\n";
            cout << "Walapun, film ini bergenre aksi tetapi film ini juga memiliki unsur komedi. Sehingga, penonton tidak\n";
            cout << "hanya diajak untuk serius tapi juga tertawa. Film ini dibungkus dengan visual yang tidak kalah bagusnya dengan\n";
            cout << "film-film luar negri yang bergenre aksi. \n\n";
            break;
        case 5:
            cout << "\n             High School Musical: The Musical: The Series\n";
            cout << "                               -Musikal-\n";
            cout << "\nTiga belas tahun setelah High School Musical difilmkan di East High,\n";
            cout << "departemen drama membuat produksi baru: High School Musical: The Musical!\n\n";
            cout << "                            Review dari kami\n\n";
            cout << "Pada tahun 2006 High School Musical yang petama difilmkan. Kemudian pada tahun 2007\n";
            cout << "High School Musical 2 difilmkan, dan pada tahun 2008 High School Musical 3 diflimkan.\n";
            cout << "Kemudian pada tahun 2019 High School Musical: The Musical: The Series difilmkan dengan menjaga\n";
            cout << "tampilan para pemain tetep fresh. Dalam series ini menceritakan di mana di sebuah sekolah ingin mengadakan\n";
            cout << "pentas musikal tentang High School Musical. Sang karakter utama yaitu Nina\n";
            cout << "yang mengikuti pentas musikal ingin memerankan dirinya sebagai Gabriella, pemain utama di High School Musical.\n";
            cout << "Series tidak hanya menceritakan tentang kehidupan di sekolah saja namun, series ini juga menceritakan tentang\n";
            cout << "kehidupan pribadi para tokoh. Dan series ini juga sangat mengendalikan emosi penonton.\n\n";
            break;
        default:
            cout << "ERROR.\nYANG ANDA MASUKKAN SALAH.\n";
            break;
        }
     } else if(umur > 17){
          cout << "Berikut rekomendasi dari kami " << endl;
            cout << "\n";
            cout << "1. Get Out" << endl;
            cout << "2. The Girl with the Dragon Tattoo" << endl;
            cout << "3. Dark(TV series)" << endl;
            cout << "4. Snowpiercer" << endl;
            cout << "5. The Witcher(TV series)" << endl;
            cout << "\n";

            cout << "Masukkan nomor film untuk lihat sinopsis dan review : ";
            cin >> pilih;
            cout << endl;
    switch (pilih) {
        case 1:
            cout << "1. Get Out \n" << endl;
            cout << "Sinopsis: \n" << endl;
            cout << "Bercerita tentang pasangan muda berbeda ras. Chris Washington";
            cout << "yang seorang kulit hitam dan Rose Armitage yang berkulit putih.";
            cout << " Chris diundang oleh orang tua Rose yang akan mengadakan pesta tahunan di rumah mereka.";
            cout << " Di sinilah Chris mulai menyadari adanya kejanggalan yang menyelimuti pesta dan keluarga Rose. \n"  << endl;
            cout << "Review dari kami: \n" << endl;
            cout << "Film dengan genre thriller-mystery ini memiliki cerita yang bagus dan\nmenegangkan.";
            cout << " Plot twistnya yang tidak terduga dan akting pemain yang sangat\nbagus membuat penonton semakin terbawa dalam cerita film ini.";
            cout << "Get Out mengangkat isu perbudakan dan rasisme yang terjadi khususnya di Amerika Serikat yang masih terjadi sampai saat ini.";
            cout << " perbudakan dan rasisme yang terjadi khususnya di\nAmerica Serikat yang masih terjadi sampai saat ini. Perasaan Chris sebagai minoritas sangat tergambarkan dalam film.";
            cout << " Alur yang tidak membosankan pastinya dapat membuat penonton selalu tertarik dengan jalannya film.";
            cout << " Film sangat kami \nrekomendasikan untuk anda para pecinta film bergenre thriller." << endl;
            break;
        case 2:
            cout << "2. The Girl with the Dragon Tattoo\n" << endl;
            cout << "Sinopsis: \n" << endl;
            cout << "Menceritakan seorang konglomerat Swedia bernama Henrik Vanger yang kehilangan   putrinya secara misterius yang diduga telah mati terbunuh.\n";
            cout << "Lantas ia menyewa seorang penyelidik bernama Mikael Blomkvist, seorang pemimpin redaksi. ";
            cout << "Karena merasa kesulitan, Mikael meminta Henrik untuk mencarikan dirinya seorang partner.";
            cout << "Dipilihlah wanita bernama Lisbeth Salander, seorang penyelidik dan hacker handal. Bersama, mereka mencoba memecahkan misteri hilangnya putri\nHenrik yang telah hilang selama 40 tahun.\n";
            cout << "\nReview dari kami:\n "<< endl;
            cout << "Film yang diadaptasi dari novel buatan Stieg Larsson asal Swedia mendapatkan dan disutradarai oleh David Fincher mampu membawa film ini untuk mendapatkan\nberbagai penghargaan. ";
            cout << "Alur cerita yang awalnya biasa saja namun setelah jalannya film semakin menegangkan dan sayang untuk dilewatkan. ";
            cout << "Plot twist yang tidak terduga dan akting pemain yang bagus membuat film ini masuk ke dalam daftar film   dengan genre thriller-crime-mystery terbaik." << endl;
            break;
        case 3:
            cout << "3. Dark(TV series)\n" << endl;
            cout << "Sinopsis: \n" << endl;
            cout << "Serial Dark menceritakan tentang misteri hilangnya anak-anak disebuah kota\n fiktif di Jerman bernama Windern. ";
            cout << "Anak-anak selalu hilang secara misterius di  sebuah gua di kota tersebut. ";
            cout << "Kasus tersebut semakin gempar semenjak hilangnya    anak seorang kepala polisi saat mengunjungi gua tersebut bersama sang tokoh utama bernama Jonas dan teman-temannya. " << endl;
            cout << "\nReview dari kami:\n " << endl;
            cout << "Serial Netflix ini berhasil membuat kami berpikir keras tentang  maksud dan alur yang ada pada film ini. ";
            cout << "Plot twist selalu berhasil dan gelapnya suasana kota yang berada di tengah hutan semakin menambah kemisteriusan film ini. ";
            cout << "Dark membawa-kan tema perjalanan waktu yang penuh dengan paradoks dan hubungan sebab-akibat  yang membuat serial ini harus ditonton dengan cermat agar memahami sepenuhnya\napa maksud dari salah satu serial terbaik Netflix ini. ";
            cout << "Film ini tidak disarankan  bagi anda yang tidak suka dengan film berat dan perlu berpikir keras. ";
            cout << "Namun,  jika anda suka film ini sangat cocok untuk menemani anda selama pandemi. " << endl;
            break;
        case 4:
            cout << "4. Snowpiercer\n" << endl;
            cout << "Sinopsis:\n" << endl;
            cout << "Snowpiercer adalah film yang disutradarai oleh Bong Joon-Ho tentang sebuah kereta yang berjalan tanpa henti pada saat bumi sudah mengalami kehancuran akibat jaman es.";
            cout << "Karakter utama bernama Curtis ingin mencoba memberontak akibat perlakuan tidak adil kalangan atas kepada gerbong belakang yang hidup kumuh.";
            cout << "Dibantu oleh orang-orang di gerbong belakang dan seorang pria korea dan anak perempuannya, mereka mencoba menerobos pertahanan dan mengambil alih kereta." << endl;
            cout << "\nReview dari kami:" << endl;
            cout << "Snowpiercer berhasil menggambarkan suasana pasca-kiamat yang baik.";
            cout << "Alur yang rapi dan akting pemain yang bagus, terutama tokoh utama, Curtis yang diperankan oleh Chris Evans.";
            cout << "Walaupun banyak terdapat plot hole dan ending yang kurang memuaskan, bukan berarti film ini tidak layak tonton.";
            cout << "Overall, film ini cukup baik dan tidak sia-sia untuk anda liat." << endl;
            break;
        case 5:
            cout << "5. The Witcher(TV series)\n" << endl;
            cout << "Sinopsis:\n" << endl;
            cout << "Series Netflix satu ini diangkat dari novel karangan Andrzej Sapkowski asal Polandia. ";
            cout << "Tidak hanya film, bahkan The Witcher diangkat menjadi game trilogy yang sangat sukses di pasaran. ";
            cout << "Bercerita tentang Geralt of Rivia, seorang Witcher(sebutan orang yang telah termutasi akibat percobaan), seorang putri kerajaan bernama Ciri, dan Yennefer,penyihir cacat. ";
            cout << "Cerita mereka saling terhubung satu sama lain dan diceritakan dalam waktu yang berbeda. " << endl;
            cout << "\nReview dari kami:\n " << endl;
            cout << "Film ini bukan untuk semua orang, apalagi orang awam yang asing dengan novel ataupun game The Witcher.";
            cout << "Namun, bukan berarti orang awam tidak bisa menikmati film ini. ";
            cout << "Film penuh politik dan benang-benang alur yang awalnya ruwet dapat \ntersambung dengan bagus di akhir episode.";
            cout << "Bagi orang yang menikmati film seperti ini 2pastinya tidak keberatan memberi film ini kesempata. ";
            cout << "Series ini merupakan salah satu series terbaik yang dimiliki oleh Netflix dan anda harus mencoba menontonnya. " << endl;
            break;
        default:
            cout << "ERROR.\nYANG ANDA MASUKKAN SALAH.\n";
            break;
        }
     }
     cout << endl;

    cout<<"Mau rekomendasi lagi? Ketik (Y) jika ingin, jika tidak ketik (T): ";
    cin>> out;
    cout << endl;
    }   while(out=='Y'||out=='y');
        cout<<"Terima Kasih :)"<<endl;
    return 0;
}

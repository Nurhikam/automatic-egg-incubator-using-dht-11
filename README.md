# ALAT PENETAS TELUR OTOMATIS MENGGUNAKAN SENSOR DHT11

## LATAR BELAKANG
Alat penetas telur merupakan alat yang digunakan di peternakan atau di perusahaan untuk menetaskan beberapa telur secara bersamaan. Alat tersebut digunakan untuk mempertahankan suhu ruangan tempat telur ditetaskan untuk mencegah resiko terjadinya telur yang gagal menetas. Pada alat penetas telur terdapat dua hal yang perlu dijaga yaitu suhu dan kelembaban udara. Oleh karena itu pada sistem ini digunakan lampu bohlam untuk menghasilkan panas yang dapat menghangatkan telur.
Akan tetapi, alat penetas telur biasa memiliki kekurangan yaitu perlu dinyala-matikan secara manual. Hal tersebut terbilang kurang efektif dikarenakan suhu dan kelembaban di sekitar tempat telur dapat berubah tak beraturan. Perubahan yang tak menentu tersebut dapat mempengaruhi telur yang sedang ditetaskan baik berupa suhu yang terlalu tinggi maupun kelembaban yang terlalu rendah.
  
## SOLUSI
Berdasarkan masalah dari latar belakang, maka dibuatlah alat yang dapat mengontrol nyala lampu bohlam berdasarkan suhu dan kelembaban ruangan yang didapat menggunakan sensor DHT11. Nantinya suhu dan kelembaban yang didapat dari sensor akan diproses di mikrokontroler untuk memproses data yang didapat dan menentukan apakah lampu bohlam akan menyala atau mati. 

## ANALISIS 
Sensor DHT11 merupakan sensor yang berfungsi dalam mengatur 2 parameter lingkungan sekaligus, yaitu suhu dan kelembaban udara, yang didalamnya terdapat thermistor tipe NTC _(Negative Temperature Coefficient)_ yang berfungsi dalam mengukur suhu dan merupakan sebuah sensor kelembaban tipe resistif dan mikrokontroller 8-bit yang mengolah kedua sensor tersebut dan mengirimnya ke pin output dengan format single-wire-bi-directional (kabel tunggal dua arah).

#### Gambar Sensor DHT11:

![Gambar Sensor DHT11](https://user-images.githubusercontent.com/92198564/172817137-b307f74d-293f-49ac-abcf-f7740653f4aa.png)

Setiap elemen pada sensos DHT11 dirancang secara ketat dan akurat pada kalibrasi kelembaban (humidity). Koefisien kalibrasi disimpan sebagai program pada memori OTP, yang digunakan dalam proses pendeteksian sinyal internal sensor. Single-Wire serial interface membuat sistem integrasi menjadi lebih cepat dan mudah. Ukurannya yang kecil dan konsumsi dayanya yang rendah (hingga 20 meter sinyal transmisi) membuat sensor DHT11 menjadi sensor yang memiliki tingkat efisiensi dan akurasi yang cukup baik. Sensor ini memiliki 4 kaki, yaitu pin VCC, Data, NC, dan GND.

### Spesifikasi sensor DHT 11:
#### Suhu

	1. Resolusi pengukuran : 16 bit

	2. Rentang pengukuran suhu udara : 0° – 50° C 

	3. Akurasi : ±2° C 

	4. Waktu respon : 1/e (63%) 10 detik

#### Kelembaban
	
	1. Resolusi pengukuran : 16 bit
	
	2. Rentang pengukuran kelembaban udara : 20% - 90% RH
	
	3. Akurasi : ± 5% 
	
	4. Waktu respon : 1 / e (63%) of  25ºC 6 detik

Sensor DHT 11 digunakan untuk membaca suhu dan temperature udara didalam incubator pemanasan, dimana saat mesin bekerja akan terjadi proses pemanasan di dalam incubator yang pada suhu tertentu akan dibaca oleh sensor DHT11 untuk menghidupkan komponen yang dihubungkan dengan sensor tersebut. Dengan stabilitas yang baik, sensor ini dapat melakukan pembacaan suhu dan kelembaban yang tepat. Komponen pada sensor DHT11 memiliki peran yang penting dalam pengukuran suhu dan kelembaban untuk menghasilkan data yang akurat dalam pengontrolan mesin penetas otomatis. 

Saat alat dinyalakan, maka heater (pemanas) pada incubator akan menyala secara otomatis hingga batas /rentang yang diinginkan. Sensor DHT11 akan mendeteksi suhu batas pada incubator. Apabila suhu melewati suhu batas atas, maka heater akan mati dan blower akan menyala, namun jika suhu dideteksi melewati batas bawah maka heater akan tetap menyala dan blower akan mati, hal ini bertujuan untuk menjaga suhu agar tetap sesuai dengan incubator.

### Spesifikasi alat penetas telur otomatis: 
1. Sistem dapat memantau dan membaca suhu dan kelembaban dalam inkobator yang akan ditampilkan pada LCD. Sensor DHT11 ditempatkan di sekitar incubator untuk membaca suhu dan kelembaban pada incubator.
2. Sistem dapat menjaga suhu dalam incubator sesuai suhu dan kelembaban yang diinginkan dan apabila melewati batas suhu, sistem juga dapat mengendalikan mati dan nyalanya heater yang berfungsi sebagi pemanas pada incubator dan blower sebagai penetral suhu apabila melewati batas atas.

## KESIMPULAN
Berdasarkan uraian diatas, dapat kita simpulkan bahwa :
1.	Mesin penetas telur konvensional memiliki tingkat akurasi yang masih kurang. Oleh karena itu, untuk meningkatkannya dapat digunakan sensor DHT11 dengan tingkat akurasi yang lebih tinggi. 
2.	Sensor DHT11 dapat membaca suhu dan kelembaban udara sekaligus dalam incubator.
3.	Sensor DHT11 dapat mengontrol pengaturan suhu dan kelembaban pada incubator apabila melewati batas yang diinginkan. 

## REFERENSI
Lenty Marwani, N. D. (2017). PENGGUNAAN SENSOR DHT11 SEBAGAI INDIKATOR SUHU DAN KELEMBABAN PADA BABY INCUBATOR. Jurnal Mutiara Elektromedik Vol 1 No 1 November 2017, 1-3.

Saptadi, A. H. (2014). Perbandingan Akurasi Pengukuran Suhu dan Kelembaban Antara Sensor DHT11 dan DHT22. 2-6.
https://ejournal.st3telkom.ac.id/index.php/infotel/article/view/16/17

## LAMPIRAN
### GAMBAR WIRING PENETAS TELUR OTOMATIS
![Wiring Automatic Incubator Project](https://user-images.githubusercontent.com/92198564/172821988-e79e3e9d-40fb-42f5-bd8c-34dda7e20054.jpg)

### LINK VIDEO DEMO ALAT PENETAS TELUR OTOMATIS
https://youtu.be/REtbFbTDfRA

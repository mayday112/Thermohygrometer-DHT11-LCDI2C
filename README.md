Thermohygrometer
Thermohygrometer adalah alat yang menggabungkan instrumen untuk mengukur suhu dan kelembaban udara, baik pada lingkungan tertutup maupun terbuka. Pada Kali ini saya membuat Thermohygrometer untuk ruangan penyimpanan Obat di suhu ruangan (15°-30°C)
Algoritma
1.	DHT11 membaca suhu dan kelembaban udara dan diteruskan ke Arduino
2.	Arduino UNO memproses data pembacaan dan menampilkan data pembacaan tadi
3.	Jika Suhu berada dibawah 15 atau melebihi 30 ℃, atau kelembaban udara dibawah 50% maka LED merah akan menyala. Sebaliknya jika kondisi tadi tidak terpenuhi LED hijau akan menyala.

Arduino => DHT11
13 -> DATA

Arudino => LCD I2C
A5 -> SCL
A4 -> SDA

Arduino => LED GREEN
12 -> + LED

Arduino => LED GREEN
11 -> + L

JANGAN LUPA INSTALL LIBRARY DHT DAN LCD I2C PADA ARDUINO IDE ANDA JIKA ANDA BELUM MENGINSTALLNYA
JANGAN LUPA INSTALL LIBRARY ARDUINO DAN DHT PADA PROTEUS ANDA JIKA ANDA MENGGUNAKAN SIMULASI DI PROTEUS UNTUK MENJALANKAN PROJEK INI

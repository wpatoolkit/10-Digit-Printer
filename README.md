# 10 Digit Printer
This is a small program written in C++ that will output all possible combinations of 10 digit numbers.

To compile on Windows (requires the <a href="http://www.microsoft.com/en-us/download/details.aspx?id=8279">Windows 7 SDK</a>):<br>
`cl /EHsc 10.cpp`

To compile on Linux:<br>
`g++ 10.cpp -o10`

<b>Example usage:</b>

`10.exe`<br>
will output all 10-digit numbers from 0000000000 to 9999999999

`10.exe -random`<br>
will output 10-digit numbers at random

`10.exe -reverse`<br>
will output all 10-digit numbers from 9999999999 to 0000000000

`10 -random | aircrack-ng -w - CAP.cap -e SSID`<br>
pipes its output into <a href="http://www.aircrack-ng.org/">aircrack-ng</a>

`10 -random | oclHashcat64 -m 2500 CAP.hccap`<br>
pipes its output into <a href="http://hashcat.net/oclhashcat/">oclHashcat</a> (AMD)

`10 -random | cudaHashcat64 -m 2500 CAP.hccap`<br>
pipes its output into <a href="http://hashcat.net/oclhashcat/">cudaHashcat</a> (NVIDIA)

`./10 -random | pyrit -r CAP.cap -i- attack_passthrough`<br>
pipes its output into <a href="https://code.google.com/p/pyrit/">pyrit</a>

# C-LANG

- Bu github reposunda c dilinin temeli ile 4 işlemli basit bir hesap makinesi kodlandı ve geliştirildi.

## Bu projeyi yaparken öğrendiklerim ve kullandıklarım:

- msys64 programının ne işe yaradığını
- `winget` komutlarının ne işe yaradığını
- `choco` komutlarının ne işe yaradığını
- .c dosyasının nasıl .exe dosyasına dönüştürüldüğünü
- .exe dosyasına dönüştürmeden nasıl düz .c olarak RAM'de çalıştığını

## C dosyasından nasıl EXE dosyasına derlenir:

- `gcc main.c -o program.exe`: buradaki 'main' c dilinde kodlanan dosyanin adı, 'program' ise derlenen dosyanın adı.

## C dosyasını EXE dosyasına derlemeden çalıştırma:

- `tcc -run main.c`: buradaki tcc komutu 'main' adındaki c dili ile yazılmış dosyayı RAM kullanarak .exe dosyasına dönüştürmeden derlemesini yapar.
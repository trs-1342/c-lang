# C-LANG 💻

- Bu github reposunda c dilinin temeli ile 4 işlemli basit bir hesap makinesi kodlandı ve geliştirildi.

## Bu projeyi yaparken öğrendiklerim ve kullandıklarım 📚

- 🖥️ msys64 programının ne işe yaradığını  
- 🛠️ `winget` komutlarının ne işe yaradığını  
- 📦 `choco` komutlarının ne işe yaradığını  
- ⚙️ .c dosyasının nasıl .exe dosyasına dönüştürüldüğünü  
- 🚀 .exe dosyasına dönüştürmeden nasıl düz .c olarak RAM'de çalıştığını  

## C dosyasından nasıl EXE dosyasına derlenir ⚡

- `gcc main.c -o program.exe`: buradaki 'main' c dilinde kodlanan dosyanin adı, 'program' ise derlenen dosyanın adı.

## C dosyasını EXE dosyasına derlemeden çalıştırma 🌀

- `tcc -run main.c`: buradaki tcc komutu 'main' adındaki c dili ile yazılmış dosyayı RAM kullanarak .exe dosyasına dönüştürmeden derlemesini yapar.

## Nasıl indirilir ⬇️

### MSYS2 + GCC (önerilen yol) 🔧
- 🌐 resmi site: [https://www.msys2.org](https://www.msys2.org)  
- 📥 kurulumdan sonra **UCRT64 terminali** aç ve şu komutları gir:
  ```bash
  pacman -Syu
  pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
- ➕ PATH’e C:\msys64\ucrt64\bin ekle.
- ✅ artık gcc main.c -o program.exe ile derleyebilirsin.

> **_NOT:_** ⚠️ indirme sırasında hata alabilirsiniz, bunun için ai veya internette başvurabilirsiniz.

---
# 📩 İletişim
- ✉️ Email: hattab1342@gmail.com
- 🌍 My Web Site: [Hello World!](https://hello-world-mu-cyan.vercel.app/)
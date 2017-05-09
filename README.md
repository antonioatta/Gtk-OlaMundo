# Gtk-OlaMundo
Exemplo 1 de programa C sobre a toolkit Gtk+

Para compilar usar: 

"gcc -o OlaMundoGtk.exe OlaMundoGtk.c -Wall `pkg-config --cflags --libs gtk+-3.0` -Wl,--export-all-symbols" 

a partir de um ambiente configurado com o pacote de desenvolvimento Gtk+ 3 instalado juntamente com o compilador C, a exemplo de
MSYS2 com MinGW (32 ou 64 bits).

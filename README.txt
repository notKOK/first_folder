Исходный код для лабораторной работы.
vars.cpp
arrays.cpp
struct.cpp

Вывод для системы Linux первой программы:
Global address: 0x404198
Local address: 0x7ffd02afa6c8
Dynamic address: 0x59ce70

Вывод для системы Linux второй программы:
Static 1 dim:
0x7ffe0633f3d0
0x7ffe0633f3d4
0x7ffe0633f3d8

Dynamic 1 dim:
0x1815e70
0x1815e74
0x1815e78

Static 2 dim:
0x7ffe0633f3a0
0x7ffe0633f3a4
0x7ffe0633f3a8
0x7ffe0633f3ac
0x7ffe0633f3b0
0x7ffe0633f3b4
0x7ffe0633f3b8
0x7ffe0633f3bc
0x7ffe0633f3c0

Dynamic 2 dim:
0x1815eb0
0x1815eb4
0x1815eb8
0x1815ed0
0x1815ed4
0x1815ed8
0x1815ef0
0x1815ef4
0x1815ef8

Вывод для системы Linux третьей программы:
Struct with default alignment:
Location:
0x7ffe59f226c0
0x7ffe59f226c4
0x7ffe59f226c8

Size of structure from sum of fields: 14
Size of structure from 'sizeof': 16

Struct with no alignment (one byte)
Location:
0x7ffe59f226e0
0x7ffe59f226e4
0x7ffe59f226e6

Size of structure from sum of fields: 14
Size of structure from 'sizeof': 14

Struct with random alignment BY MY HANDS):
Location:
0x7ffe59f226e0
0x7ffe59f226e8
0x7ffe59f226f0

Size of structure from sum of fields: 11
Size of structure from 'sizeof': 24

Struct with alignment by hands:
Location:
0x7ffe59f226c8
0x7ffe59f226c0
0x7ffe59f226ca

Size of structure from sum of fields: 11
Size of structure from 'sizeof': 16
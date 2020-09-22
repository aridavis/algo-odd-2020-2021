# TutuLator

## Pendahuluan

Suatu hari di tengah kegabutan di masa WFH, Tutu kepikiran untuk membuat sebuah kalkulator yang bernama TutuLator. Jadi akan ada 4 buah character yaitu _C1, C2, C3, C4_.

Kita misalkan, _C1_ adalah 'A', _C2_ adalah 'B', _C3_ adalah 'C' dan _C4_ adalah 'D'.

TutuLator akan mengubah semua karakter tersebut menjadi angka, contoh: A = 1, B = 2, ... , Z = 26

dan akan mengkalkulasikannya seperti berikut:

```
C1 ditambah dengan C2
(C1 + C2) dikali dengan C3

hasil perkalian tersebut, di modulus C4
```

Setelah mendapatkan hasil kalkulasi tersebut, Tutu ingin menampilkan karakter dari hasil tersebut.

Simulasi Perhitungan:

```
C1 = A -> 1
C2 = B -> 2
C3 = C -> 3
C4 = D -> 4

C1 + C2  = 3
2 X C3 = 9
6 % C4 = 1

Setelah mendapat hasilnya,
maka convert angka 1 menjadi character yaitu A
```

## Input

Inputan akan terdiri dari 4 character berjejer yang terpisahkan oleh spasi

contoh:

```
C1 C2 C3 C4
```

## Output

Output adalah hasil konversi dari hasil kalkulasi ke dalam bentuk Character

## Constraint

A <= _C1, C2, C3, C4_ <= Z

## Test Case

| Input   | Output |
| ------- | ------ |
| A B C D | A      |
| B C N O | J      |

# kolekcjoner / collector
## Egzamin praktyczny z Algorytmów i Struktur Sanych /  Practical exam in Algorithms and Data Structures

## [POL]
Bajtazar planuje start w corocznym Wyścigu Kolekcjonerów. Wyścig polega na jak najszybszym biegu ze startu
do mety na specjalnie przygotowanej planszy. Dodatkowo każdy zawodnik musi po drodze zebrać chociaż jeden
egzemplarz każdego rodzaju kryształu (w Bajtocji występują 3 rodzaje kryształów).
Plansza jest reprezentowana przez rysunek o n wierszach i m kolumnach. Rysunek składa się z następujących
znaków:

- . - puste pole,
- \# - ściana (pole na które nie można wejść),
- S - start,
- M - meta,
- 1, 2, 3 - kryształ rodzaju 1, 2, 3

Każdy z biegaczy może w jednym ruchu przejść do jednego z 4 sąsiednich pól (góra, dół, lewo, prawo). Oczywiście nie jest możliwe wyjście poza planszę oraz wejście na pole zawierające ścianę.
Pomóż Bajtazarowi znaleźć długość najkrótszej marszruty z S do M, która po drodze przechodzi co najmniej
raz przez każde z pól typu 1, 2, 3. Jeśli taka marszruta nie istnieje to program powienien wypisać -1.
### Wejście
Pierwszy wiersz wejścia zawiera dwie liczby całkowite: n i m (1 ≤ n, m ≤ 600) oznaczające liczbę wierszy i
kolumn rysunku opisującego planszę. W kolejnych n wierszach zapisany jest opis rysunku, każdy z wierszy
składa się z m znaków. Możesz założyć, że rysunek zawiera dokładnie jeden znak S i dokładnie jeden znak M.
### Wyjście
Twój program powinien wypisać na wyjście jedną liczbę: długość najkrótszej marszruty z S do M spełniającej
warunki zadania lub -1 jeśli taka marszruta nie istnieje.
### Przykład
Dla danych wejściowych:
```
9 10
S..222....
#########.
3.........
#########.
....3.....
1########1
..........
.#########
.....2...M
```
poprawnym wynikiem jest:
```
35
```
### Wyjaśnienie do przykładu:
Na poniższym rysunku przedstawiono optymalną marszrutę (przy pomocy znaku *):
```
S*********
#########*
3........*
#########*
**********
*########1
*.........
*#########
*********M
```

## [ENG]
Bajtazar plans to take part in the annual Collector's Race. The goal of the race is to run from the start as quickly as possible
to the finish line on a specially prepared board. Additionally, each player must collect at least one of each type of crystal along the way (there are 3 types of crystals in Bajtocja).
The board is represented by a drawing with n rows and m columns. The drawing consists of the following
characters:

- . - empty field,
- \# - wall (field you cannot walk onto),
- S - start,
- M - finish,
- 1, 2, 3 - crystal of types 1, 2, 3

Each runner can be one move to one of the 4 adjacent squares (up, down, left, right). Of course, it is not possible to go outside the plan and enter the outer field.
Help Bajtazar find the length of the shortest route from S to M, which passes at least the smallest along the way
once through each of the fields 1, 2, 3. If such a route does not exist in the program, write -1.
### Input
The first line of the input contains two integers: n and m (1 ≤ n, m ≤ 600) denoting the number of lines and
columns of the drawing describing the board. The next n lines contain a description of the drawing, each line
consists of m characters. You can assume that the drawing contains exactly one S character and exactly one M character.
### Output
Your program should output one number: the length of the shortest route from S to M satisfying
task conditions or -1 if no such route exists.
### Example
For input data:
```
9 10
S..222....
#########.
3.........
#########.
....3.....
1########1
..........
.#########
.....2...M
```
correct answer is:
```
35
```
### Explanation to the example:
The figure below shows the optimal route (using *):
```
S*********
#########*
3........*
#########*
**********
*########1
*.........
*#########
*********M
```

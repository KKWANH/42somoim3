import sys

word = list(str(input()))
alphabet = [[alpha, 0] for alpha in 'abcdefghijklmnopqrstuvwxyz']

for alpha in alphabet:
    for character in word:
        if alpha[0] == character:
            alpha[1] += 1

for alpha in alphabet:
    print(alpha[1], end = ' ')
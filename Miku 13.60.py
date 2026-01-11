

text = input("Введите текст: ")

# 1) Частота каждой цифры, встречающейся в тексте
freq = {}
for char in text:
    if char.isdigit():
        freq[char] = freq.get(char, 0) + 1

print("Частота цифр в тексте:")
for digit in sorted(freq.keys()):
    print(f"{digit}: {freq[digit]}")

# 2) Частота каждой из цифр 0–9 (включая отсутствующие)
print("\nЧастота всех цифр (0–9):")
for digit in "0123456789":
    count = freq.get(digit, 0)
    print(f"{digit}: {count}")

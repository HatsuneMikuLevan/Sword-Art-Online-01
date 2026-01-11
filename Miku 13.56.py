
elements = {
    "медь": "Cu",
    "кислород": "O",
    "водород": "H",
    "железо": "Fe",
    "золото": "Au"
}

symbol = input("Введите обозначение элемента: ").strip()

# Вариант 1: с values()
if symbol in elements.values():
    print("Обозначение есть в словаре (способ 1).")
else:
    print("Обозначения нет в словаре (способ 1).")

# Вариант 2: без values()
found = False
for elem, sym in elements.items():
    if sym == symbol:
        found = True
        break

if found:
    print("Обозначение есть в словаре (способ 2).")
else:
    print("Обозначения нет в словаре (способ 2).")

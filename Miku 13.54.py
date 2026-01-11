

# Тот же словарь
elements = {
    "медь": "Cu",
    "кислород": "O",
    "водород": "H",
    "железо": "Fe",
    "золото": "Au"
}

# Ввод обозначения
symbol = input("Введите обозначение элемента: ").strip()

# Поиск по значению
found = False
for elem, sym in elements.items():
    if sym == symbol:
        print(f"Название: {elem}")
        found = True
        break

if not found:
    print("Обозначение не найдено.")
